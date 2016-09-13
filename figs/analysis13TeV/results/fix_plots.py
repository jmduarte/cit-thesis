from optparse import OptionParser
import os
import ROOT as rt
from array import *
import sys
import glob
import datetime


def exec_me(command,dryRun=True):
    print command
    if not dryRun: os.system(command)
        
if __name__ == '__main__':
    dryRun = False
    
    MRbins = {'MultiJet':[500,600, 700, 900, 1200, 1600, 2500, 4000],
              'MuMultiJet':[400, 500,600, 700, 900, 1200, 1600, 2500, 4000],
              'EleMultiJet':[400, 500,600, 700, 900, 1200, 1600, 2500, 4000],
              'LeptonMultiJet':[400, 500,600, 700, 900, 1200, 1600, 2500, 4000]
              }
    Rsqbins = {'MultiJet':[0.25,0.30,0.41,0.52,0.64,1.5],
               'MuMultiJet':[0.15,0.20,0.25,0.30,0.41,0.52,0.64,1.5],
               'EleMultiJet':[0.15,0.20,0.25,0.30,0.41,0.52,0.64,1.5],
               'LeptonMultiJet':[0.15,0.20,0.25,0.30,0.41,0.52,0.64,1.5]
               }
        
    newBox = {'MultiJet':'Multijet',
               'MuMultiJet':'Muon Multijet',
               'EleMultiJet':'Electron Multijet',
               'LeptonMultiJet':'Lepton Multijet'
                }

    
    fileName = sys.argv[1]
    box = fileName.split('.C')[0].split('_')[-1]
    btag = int(fileName.split('.C')[0].split('_')[-2].split('btag')[0])

    mapToReplace = {'tex = new TLatex(0.75,0.9,"2.2 fb^{-1} (13 TeV)");':'tex = new TLatex(0.82,0.9,"2.3 fb^{-1} (13 TeV)");',
                    'tex = new TLatex(0.75,0.9,"2.1 fb^{-1} (13 TeV)");':'tex = new TLatex(0.82,0.9,"2.3 fb^{-1} (13 TeV)");',
                    'tex = new TLatex(0.75,0.9,"2.6 fb^{-1} (13 TeV)");':'tex = new TLatex(0.82,0.9,"2.6 fb^{-1} (13 TeV)");',
                    'CMS preliminary':'CMS',
                    'CMS simulation':'CMS',
                    'Fit Total':'Fit total',
                    'Sim. Data':'Sim. data',
                    'razor %s 0 b-tag Sideband Fit'%box:'%s 0 b-tag sideband fit'%newBox[box],
                    'razor %s 1 b-tag Sideband Fit'%box:'%s 1 b-tag sideband fit'%newBox[box],
                    'razor %s 2 b-tag Sideband Fit'%box:'%s 2 b-tag sideband fit'%newBox[box],
                    'razor %s #geq 3 b-tag Sideband Fit'%box:'%s #geq 3 b-tag sideband fit'%newBox[box],
                    '1,1,500,376':'1,1,700,400',
                    'h_RsqMR_nsigma_%ibtag1d->Draw("pesame");'%btag:'h_RsqMR_nsigma_%ibtag1d->Draw("psame");'%btag,
                    'c_pad1->SetBottomMargin(0);':'c_pad1->SetBottomMargin(0.17);',
                    'c_pad2->SetTopMargin(0);':'c_pad2->SetTopMargin(0.0);',
                    'c_pad2->SetBottomMargin(0.47);':'c_pad2->SetBottomMargin(0.04);',
                    'h_th1x_data_%ibtag->GetXaxis()->SetLabelOffset(0.16);'%btag:'',
                    'h_th1x_data_%ibtag->GetXaxis()->SetLabelSize(0.06);'%btag:'h_th1x_data_%ibtag->GetXaxis()->SetLabelSize(0.02);'%btag,
                    'Bin Number':'',
                    '0.3686042':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,    
                    '0.3542528':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,   
                    '0.4525607':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,
                    #'0.4525607':'4./10.*70.*h_th1x_data_%ibtag->GetMaximum()'%btag, # for MultiJet 2-btag signal injection fix
                    '0.4728708':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,
                    '0.3951752':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,
                    '0.4075679':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,
                    '0.2924018':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,
                    #'0.2924018':'4./10.*10.*225.', # for MultiJet 3-btag signal injection fix
                    '1.01475':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,
                    '0.7368996':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,
                    '2.30066':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,
                    '1.435182':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,
                    '0.8665026':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,
                    '0.8254818':'4*h_th1x_data_%ibtag->GetMaximum()'%btag,
                    'Stat.+Sys. n#sigma':'Deviation [#sigma]',
                    'SetTitleSize(0.16)':'SetTitleSize(0.18)',
                    'TLegend *leg = new TLegend(0.7,0.6,0.9,0.8,NULL,"brNDC");':'TLegend *leg = new TLegend(0.8,0.5,0.94,0.7,NULL,"brNDC");',
                    'TLegend *leg = new TLegend(0.7,0.5,0.9,0.8,NULL,"brNDC");':'TLegend *leg = new TLegend(0.8,0.4,0.94,0.7,NULL,"brNDC");',
                    'tex = new TLatex(0.3,0.77,"m_{#tilde{g}} = 1400 GeV, m_{#tilde{#chi}} = 100 GeV");':'tex = new TLatex(0.5,0.82,"m_{#tilde{g}} = 1400 GeV, m_{#tilde{#chi}_{1}^{0}} = 100 GeV");',
                    ',0.05,':',5e-3,'
    }

    f = open(fileName)
    lines = f.readlines()

    for i, line in enumerate(lines):
        for key, val in mapToReplace.iteritems():
            if key in line:
                line = line.replace(key, val)
                lines[i] = line
                if key=='CMS preliminary' and val=='CMS':
                    lines[i+2] = lines[i+2].replace('tex->SetTextFont(42);','tex->SetTextFont(62);   tex->SetTextSize(0.065);')
                if key=='CMS simulation' and val=='CMS':
                    lines[i+2] = lines[i+2].replace('tex->SetTextFont(42);','tex->SetTextFont(62);   tex->SetTextSize(0.065); tex->Draw(); tex = new TLatex(0.22,0.9,"Simulation"); tex->SetNDC(); tex->SetTextFont(52);')
            
            if 'h_th1x_data_%ibtag->Draw("pe");'%btag in line:
                add = 'h_th1x_data_%ibtag->GetXaxis()->SetLabelSize(0.045); h_th1x_data_%ibtag->GetXaxis()->SetLabelFont(62);\n'%(btag,btag)
                for ib in range(0,len(MRbins[box])-1):
                    for jb in range(1,len(Rsqbins[box])):
                        add += 'h_th1x_data_%ibtag->GetXaxis()->SetBinLabel(%i,"[%.2f, %.2f]");\n'%(btag,ib*(len(Rsqbins[box])-1)+jb,Rsqbins[box][jb-1],Rsqbins[box][jb])
                add+= 'h_th1x_data_%ibtag->GetXaxis()->LabelsOption("v");'%(btag)
                lines[i]=add+line.replace("pe","axis")

                #lines[i]+= 'h_th1x_data_%ibtag->SetMaximum(10*h_th1x_data_%ibtag->GetMaximum());\n'%(btag,btag)
                lines[i]+= 'h_th1x_data_%ibtag->SetMaximum(70*h_th1x_data_%ibtag->GetMaximum());\n'%(btag,btag) # for MultiJet 2-btag fix
                #lines[i]+= 'h_th1x_data_%ibtag->SetMaximum(10*225);\n'%(btag) # for MultiJet 3-btag fix
                lines[i]+= 'h_th1x_data_%ibtag->SetMinimum(5e-3);\n'%btag
                lines[i]+= 'h_th1x_data_%ibtag->SetLineColor(kBlack);\n'%btag
                lines[i]+= 'const double alpha = 1 - 0.6827;\n'
                lines[i]+= 'TGraphAsymmErrors * g = new TGraphAsymmErrors(h_th1x_data_%ibtag);\n'%btag
                lines[i]+= 'g->SetMarkerStyle(20);\n'
                lines[i]+= 'for (int i = 0; i < g->GetN(); ++i) {\n'
                lines[i]+= 'int N = g->GetY()[i];\n'
                lines[i]+= 'double L =  (N==0) ? 0  : (ROOT::Math::gamma_quantile(alpha/2,N,1.));\n'
                lines[i]+= 'double U =  ROOT::Math::gamma_quantile_c(alpha/2,N+1,1);\n'
                lines[i]+= 'g->SetPointEYlow(i, N-L);\n'
                lines[i]+= 'g->SetPointEYhigh(i, U-N);}\n'
                lines[i]+= 'TGraphAsymmErrors* gClone = (TGraphAsymmErrors*) g->Clone("gClone");\n'
                lines[i]+= 'gClone->SetMarkerSize(0);\n'
                #lines[i]+= 'gClone->Draw("zpsame");\n'
                #lines[i]+= 'g->Draw("zpsame");\n'
                for ib in range(0,len(MRbins[box])-1):
                    extra = 0.02
                    step = 0.1
                    if MRbins[box][ib+1] > 1000:
                        extra = 0.01
                    if box=='MultiJet':
                        step = 0.114
                        extra = 0.025
                        if MRbins[box][ib+1] > 1000:
                            extra = 0.015
                        
                    lines[i]+= 'tex = new TLatex(%.2f,0.72,"[%i, %i]"); tex->SetNDC(); tex->SetTextFont(62); tex->SetTextSize(0.04); tex->Draw();'%(0.15+ib*step+extra,MRbins[box][ib],MRbins[box][ib+1])
                    
                #lines[i]+= 'tex = new TLatex(0.195,0.77,"M_{R}"); tex->SetNDC(); tex->SetTextFont(62); tex->SetTextSize(0.04); tex->Draw();'
                lines[i]+= 'tex = new TLatex(0.1725,0.77,"M_{R} [GeV]"); tex->SetNDC(); tex->SetTextFont(62); tex->SetTextSize(0.04); tex->Draw();'
                #lines[i]+= 'tex = new TLatex(0.13,0.07,"R^{2}"); tex->SetNDC(); tex->SetTextFont(62); tex->SetTextSize(0.04); tex->Draw();'
                # after final reading, wanted bigger R^2
                lines[i]+= 'tex = new TLatex(0.96,0.07,"R^{2}"); tex->SetNDC(); tex->SetTextFont(42); tex->SetTextSize(0.07); tex->Draw();'
            
            if 'h_th1x_data_%ibtag->Draw("pesame");'%btag in line:
                lines[i] = 'gClone->Draw("zpsame"); g->Draw("zpsame"); h_th1x_data_%ibtag->Draw("axissame");'%btag
    lines[-1] = lines[-1].replace('}','c->Print("%s");}'%fileName.replace('.C','.pdf'))
    f.close()
    
    fout = open(fileName.replace('.C','_new.C'),'w')
    for i, line in enumerate(lines):
        fout.write(line)
    fout.close()

    exec_me('root -l -b -q %s'%(fileName.replace('.C','_new.C')),dryRun)
