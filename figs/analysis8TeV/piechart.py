import ROOT as rt
from array import array

if __name__ == '__main__':

    box = {}
    box['MuEle'] = [159, 2, 2]
    box['MuMu'] = [510, 1 , 7 ]
    box['EleEle'] = [486 ,1,19]
    box['MuJet'] = [3473, 862, 72]
    box['MuMultiJet'] = [5534, 377, 25]
    box['EleJet'] = [2950, 1032, 64]
    box['EleMultiJet'] =  [4445, 353, 12]
    box['MultiJet'] = [1635, 198 , 154]
    box['Jet2b'] =  [378, 34, 58]    
    #colors = [rt.kAzure+2,rt.kGreen+1,rt.kGreen+3]
    colors = [rt.kAzure+2,rt.kMagenta+1,rt.kGreen+1]
    styles = [1001,1001,1001]
    names = ['t#bar{t}','W+jets','Z+jets']

    pies = {}
    cpie = rt.TCanvas("cpie","TPie test",400,300)    
    cpie.Divide(4,3)
    boxNum = {}
    boxNum['MuEle'] = 1
    boxNum['MuMu'] = 2
    boxNum['EleEle'] = 3
    boxNum['MuMultiJet'] = 5
    boxNum['MuJet'] = 6
    boxNum['EleMultiJet'] = 7
    boxNum['EleJet'] = 9
    boxNum['Jet2b'] = 10
    boxNum['MultiJet'] = 11
    for key, vals in sorted(box.iteritems()):
        cpie.cd(boxNum[key])
        nvals = len(vals)       
        pies[key] = rt.TPie("pie"+key,key.replace('Jet2b','2b-Jet'),nvals)
        for i in range(0,nvals):       
            pies[key].SetEntryVal(i,vals[i])
            pies[key].SetEntryFillColor(i,colors[i])
            pies[key].SetEntryLineColor(i,colors[i])
            pies[key].SetEntryFillStyle(i,  styles[i])
            pies[key].SetEntryLabel(i,  names[i])            
            #pies[key].SetEntryRadiusOffset(i, i*0.02);

        rt.gStyle.SetTitleSize(0.2,"t")
        rt.gStyle.SetTitleOffset(.5,"t")
        #pies[key].SetCircle(.35,.5,.3)
        pies[key].SetCircle(.5,.4,.35)
        pies[key].SetLabelsOffset(1000)
        #pies[key].Draw("3d t nol")
        pies[key].Draw("rsc nol")

    cpie.cd(8)
    pieleg = pies['MultiJet'].MakeLegend()
    pieleg.SetLineColor(rt.kWhite)
    pieleg.SetX1(0.1)
    pieleg.SetX2(0.9)
    pieleg.SetY1(0.1)
    pieleg.SetY2(0.9)
    pieleg.Draw()
    
    cpie.Print("pies.pdf")
    cpie.Print("pies.C")
