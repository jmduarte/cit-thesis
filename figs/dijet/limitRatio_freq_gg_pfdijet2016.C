{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 27 16:08:22 2016) by ROOT version5.34/31
   TCanvas *c = new TCanvas("c", "c",0,0,500,400);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(288.8889,-1.973684,8001.307,11.18421);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridy();
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.17);
   c->SetRightMargin(0.065);
   c->SetBottomMargin(0.15);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle(" ;Resonance Mass m_{X} [GeV]; Limit ratio (stat.+syst. / stat.-only)");
   
   TGraph *graph = new TGraph(69);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetPoint(0,1200,5.058365759);
   graph->SetPoint(1,1300,3.415617128);
   graph->SetPoint(2,1400,3.352024922);
   graph->SetPoint(3,1500,2.860377358);
   graph->SetPoint(4,1600,2.380090498);
   graph->SetPoint(5,1700,2.096514745);
   graph->SetPoint(6,1800,1.96214511);
   graph->SetPoint(7,1900,1.911439114);
   graph->SetPoint(8,2000,1.913419913);
   graph->SetPoint(9,2100,1.895522388);
   graph->SetPoint(10,2200,1.873925501);
   graph->SetPoint(11,2300,1.816393443);
   graph->SetPoint(12,2400,1.760299625);
   graph->SetPoint(13,2500,1.69787234);
   graph->SetPoint(14,2600,1.628019324);
   graph->SetPoint(15,2700,1.57260274);
   graph->SetPoint(16,2800,1.529411765);
   graph->SetPoint(17,2900,1.494736842);
   graph->SetPoint(18,3000,1.462745098);
   graph->SetPoint(19,3100,1.449339207);
   graph->SetPoint(20,3200,1.429268293);
   graph->SetPoint(21,3300,1.422343324);
   graph->SetPoint(22,3400,1.416413374);
   graph->SetPoint(23,3500,1.420875421);
   graph->SetPoint(24,3600,1.419475655);
   graph->SetPoint(25,3700,1.423236515);
   graph->SetPoint(26,3800,1.410958904);
   graph->SetPoint(27,3900,1.42278481);
   graph->SetPoint(28,4000,1.417366947);
   graph->SetPoint(29,4100,1.421538462);
   graph->SetPoint(30,4200,1.416949153);
   graph->SetPoint(31,4300,1.408921933);
   graph->SetPoint(32,4400,1.4);
   graph->SetPoint(33,4500,1.394618834);
   graph->SetPoint(34,4600,1.370731707);
   graph->SetPoint(35,4700,1.363636364);
   graph->SetPoint(36,4800,1.34502924);
   graph->SetPoint(37,4900,1.335483871);
   graph->SetPoint(38,5000,1.313901364);
   graph->SetPoint(39,5100,1.299516978);
   graph->SetPoint(40,5200,1.293193755);
   graph->SetPoint(41,5300,1.268156441);
   graph->SetPoint(42,5400,1.266666633);
   graph->SetPoint(43,5500,1.245161295);
   graph->SetPoint(44,5600,1.23776227);
   graph->SetPoint(45,5700,1.225563867);
   graph->SetPoint(46,5800,1.207999992);
   graph->SetPoint(47,5900,1.208695665);
   graph->SetPoint(48,6000,1.183486167);
   graph->SetPoint(49,6100,1.174757351);
   graph->SetPoint(50,6200,1.161616126);
   graph->SetPoint(51,6300,1.163157929);
   graph->SetPoint(52,6400,1.129032198);
   graph->SetPoint(53,6500,1.134831468);
   graph->SetPoint(54,6600,1.114942556);
   graph->SetPoint(55,6700,1.094117625);
   graph->SetPoint(56,6800,1.096385596);
   graph->SetPoint(57,6900,1.098765411);
   graph->SetPoint(58,7000,1.101265799);
   graph->SetPoint(59,7100,1.074074077);
   graph->SetPoint(60,7200,1.074074077);
   graph->SetPoint(61,7300,1.072289161);
   graph->SetPoint(62,7400,1.070588236);
   graph->SetPoint(63,7500,1.067415734);
   graph->SetPoint(64,7600,1.063157898);
   graph->SetPoint(65,7700,1.052381018);
   graph->SetPoint(66,7800,6.949485468e-310);
   graph->SetPoint(67,7900,-1.290744427e-231);
   graph->SetPoint(68,8000,0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,520,8680);
   Graph_Graph1->SetMinimum(-0.5058366);
   Graph_Graph1->SetMaximum(5.564202);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->SetMarkerStyle(8);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(69);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   graph->SetPoint(0,1200,4.384971013);
   graph->SetPoint(1,1300,3.963549338);
   graph->SetPoint(2,1400,4.209561109);
   graph->SetPoint(3,1500,3.122332567);
   graph->SetPoint(4,1600,1.917579496);
   graph->SetPoint(5,1700,1.730807622);
   graph->SetPoint(6,1800,1.781644896);
   graph->SetPoint(7,1900,1.85050955);
   graph->SetPoint(8,2000,1.917186363);
   graph->SetPoint(9,2100,1.749115626);
   graph->SetPoint(10,2200,2.079869869);
   graph->SetPoint(11,2300,1.821208998);
   graph->SetPoint(12,2400,1.84461772);
   graph->SetPoint(13,2500,1.538740368);
   graph->SetPoint(14,2600,1.486789652);
   graph->SetPoint(15,2700,1.607282569);
   graph->SetPoint(16,2800,1.436198431);
   graph->SetPoint(17,2900,1.239097615);
   graph->SetPoint(18,3000,1.27911144);
   graph->SetPoint(19,3100,1.443330821);
   graph->SetPoint(20,3200,1.498680311);
   graph->SetPoint(21,3300,1.426275702);
   graph->SetPoint(22,3400,1.405049695);
   graph->SetPoint(23,3500,1.435530314);
   graph->SetPoint(24,3600,1.405147221);
   graph->SetPoint(25,3700,1.376520839);
   graph->SetPoint(26,3800,1.381377685);
   graph->SetPoint(27,3900,1.393113527);
   graph->SetPoint(28,4000,1.353039614);
   graph->SetPoint(29,4100,1.469406012);
   graph->SetPoint(30,4200,1.536156271);
   graph->SetPoint(31,4300,1.401415593);
   graph->SetPoint(32,4400,1.274068649);
   graph->SetPoint(33,4500,1.212312627);
   graph->SetPoint(34,4600,1.20772518);
   graph->SetPoint(35,4700,1.241047246);
   graph->SetPoint(36,4800,1.265135175);
   graph->SetPoint(37,4900,1.276503339);
   graph->SetPoint(38,5000,1.284449536);
   graph->SetPoint(39,5100,1.291908527);
   graph->SetPoint(40,5200,1.266504904);
   graph->SetPoint(41,5300,1.219191663);
   graph->SetPoint(42,5400,1.218990355);
   graph->SetPoint(43,5500,1.241238899);
   graph->SetPoint(44,5600,1.193660441);
   graph->SetPoint(45,5700,1.166245476);
   graph->SetPoint(46,5800,1.174856517);
   graph->SetPoint(47,5900,1.196094447);
   graph->SetPoint(48,6000,1.168932288);
   graph->SetPoint(49,6100,1.145662598);
   graph->SetPoint(50,6200,1.123109613);
   graph->SetPoint(51,6300,1.123186269);
   graph->SetPoint(52,6400,1.140805071);
   graph->SetPoint(53,6500,1.167881398);
   graph->SetPoint(54,6600,1.167278699);
   graph->SetPoint(55,6700,1.135070323);
   graph->SetPoint(56,6800,1.11768498);
   graph->SetPoint(57,6900,1.110314684);
   graph->SetPoint(58,7000,1.098421474);
   graph->SetPoint(59,7100,1.091820841);
   graph->SetPoint(60,7200,1.063199253);
   graph->SetPoint(61,7300,1.064409498);
   graph->SetPoint(62,7400,1.06248616);
   graph->SetPoint(63,7500,1.049005144);
   graph->SetPoint(64,7600,1.048311885);
   graph->SetPoint(65,7700,1.046158596);
   graph->SetPoint(66,7800,6.949485523e-310);
   graph->SetPoint(67,7900,6.949485587e-310);
   graph->SetPoint(68,8000,6.949485635e-310);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,520,8680);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(4.823468);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->SetMarkerStyle(8);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   multigraph->Draw("a3");
   multigraph->GetXaxis()->SetTitle("Resonance Mass m_{X} [GeV]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle(" Limit ratio (stat.+syst. / stat.-only)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.052);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   graph = new TGraph(69);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetPoint(0,1200,5.058365759);
   graph->SetPoint(1,1300,3.415617128);
   graph->SetPoint(2,1400,3.352024922);
   graph->SetPoint(3,1500,2.860377358);
   graph->SetPoint(4,1600,2.380090498);
   graph->SetPoint(5,1700,2.096514745);
   graph->SetPoint(6,1800,1.96214511);
   graph->SetPoint(7,1900,1.911439114);
   graph->SetPoint(8,2000,1.913419913);
   graph->SetPoint(9,2100,1.895522388);
   graph->SetPoint(10,2200,1.873925501);
   graph->SetPoint(11,2300,1.816393443);
   graph->SetPoint(12,2400,1.760299625);
   graph->SetPoint(13,2500,1.69787234);
   graph->SetPoint(14,2600,1.628019324);
   graph->SetPoint(15,2700,1.57260274);
   graph->SetPoint(16,2800,1.529411765);
   graph->SetPoint(17,2900,1.494736842);
   graph->SetPoint(18,3000,1.462745098);
   graph->SetPoint(19,3100,1.449339207);
   graph->SetPoint(20,3200,1.429268293);
   graph->SetPoint(21,3300,1.422343324);
   graph->SetPoint(22,3400,1.416413374);
   graph->SetPoint(23,3500,1.420875421);
   graph->SetPoint(24,3600,1.419475655);
   graph->SetPoint(25,3700,1.423236515);
   graph->SetPoint(26,3800,1.410958904);
   graph->SetPoint(27,3900,1.42278481);
   graph->SetPoint(28,4000,1.417366947);
   graph->SetPoint(29,4100,1.421538462);
   graph->SetPoint(30,4200,1.416949153);
   graph->SetPoint(31,4300,1.408921933);
   graph->SetPoint(32,4400,1.4);
   graph->SetPoint(33,4500,1.394618834);
   graph->SetPoint(34,4600,1.370731707);
   graph->SetPoint(35,4700,1.363636364);
   graph->SetPoint(36,4800,1.34502924);
   graph->SetPoint(37,4900,1.335483871);
   graph->SetPoint(38,5000,1.313901364);
   graph->SetPoint(39,5100,1.299516978);
   graph->SetPoint(40,5200,1.293193755);
   graph->SetPoint(41,5300,1.268156441);
   graph->SetPoint(42,5400,1.266666633);
   graph->SetPoint(43,5500,1.245161295);
   graph->SetPoint(44,5600,1.23776227);
   graph->SetPoint(45,5700,1.225563867);
   graph->SetPoint(46,5800,1.207999992);
   graph->SetPoint(47,5900,1.208695665);
   graph->SetPoint(48,6000,1.183486167);
   graph->SetPoint(49,6100,1.174757351);
   graph->SetPoint(50,6200,1.161616126);
   graph->SetPoint(51,6300,1.163157929);
   graph->SetPoint(52,6400,1.129032198);
   graph->SetPoint(53,6500,1.134831468);
   graph->SetPoint(54,6600,1.114942556);
   graph->SetPoint(55,6700,1.094117625);
   graph->SetPoint(56,6800,1.096385596);
   graph->SetPoint(57,6900,1.098765411);
   graph->SetPoint(58,7000,1.101265799);
   graph->SetPoint(59,7100,1.074074077);
   graph->SetPoint(60,7200,1.074074077);
   graph->SetPoint(61,7300,1.072289161);
   graph->SetPoint(62,7400,1.070588236);
   graph->SetPoint(63,7500,1.067415734);
   graph->SetPoint(64,7600,1.063157898);
   graph->SetPoint(65,7700,1.052381018);
   graph->SetPoint(66,7800,6.949485468e-310);
   graph->SetPoint(67,7900,-1.290744427e-231);
   graph->SetPoint(68,8000,0);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","Graph",100,520,8680);
   Graph_Graph_Graph13->SetMinimum(-0.5058366);
   Graph_Graph_Graph13->SetMaximum(5.564202);
   Graph_Graph_Graph13->SetDirectory(0);
   Graph_Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph13->SetLineColor(ci);
   Graph_Graph_Graph13->SetMarkerStyle(8);
   Graph_Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph13->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph13->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph13->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph13->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph_Graph13->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph13->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph13->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph13);
   
   graph->Draw("c");
   
   graph = new TGraph(69);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   graph->SetPoint(0,1200,4.384971013);
   graph->SetPoint(1,1300,3.963549338);
   graph->SetPoint(2,1400,4.209561109);
   graph->SetPoint(3,1500,3.122332567);
   graph->SetPoint(4,1600,1.917579496);
   graph->SetPoint(5,1700,1.730807622);
   graph->SetPoint(6,1800,1.781644896);
   graph->SetPoint(7,1900,1.85050955);
   graph->SetPoint(8,2000,1.917186363);
   graph->SetPoint(9,2100,1.749115626);
   graph->SetPoint(10,2200,2.079869869);
   graph->SetPoint(11,2300,1.821208998);
   graph->SetPoint(12,2400,1.84461772);
   graph->SetPoint(13,2500,1.538740368);
   graph->SetPoint(14,2600,1.486789652);
   graph->SetPoint(15,2700,1.607282569);
   graph->SetPoint(16,2800,1.436198431);
   graph->SetPoint(17,2900,1.239097615);
   graph->SetPoint(18,3000,1.27911144);
   graph->SetPoint(19,3100,1.443330821);
   graph->SetPoint(20,3200,1.498680311);
   graph->SetPoint(21,3300,1.426275702);
   graph->SetPoint(22,3400,1.405049695);
   graph->SetPoint(23,3500,1.435530314);
   graph->SetPoint(24,3600,1.405147221);
   graph->SetPoint(25,3700,1.376520839);
   graph->SetPoint(26,3800,1.381377685);
   graph->SetPoint(27,3900,1.393113527);
   graph->SetPoint(28,4000,1.353039614);
   graph->SetPoint(29,4100,1.469406012);
   graph->SetPoint(30,4200,1.536156271);
   graph->SetPoint(31,4300,1.401415593);
   graph->SetPoint(32,4400,1.274068649);
   graph->SetPoint(33,4500,1.212312627);
   graph->SetPoint(34,4600,1.20772518);
   graph->SetPoint(35,4700,1.241047246);
   graph->SetPoint(36,4800,1.265135175);
   graph->SetPoint(37,4900,1.276503339);
   graph->SetPoint(38,5000,1.284449536);
   graph->SetPoint(39,5100,1.291908527);
   graph->SetPoint(40,5200,1.266504904);
   graph->SetPoint(41,5300,1.219191663);
   graph->SetPoint(42,5400,1.218990355);
   graph->SetPoint(43,5500,1.241238899);
   graph->SetPoint(44,5600,1.193660441);
   graph->SetPoint(45,5700,1.166245476);
   graph->SetPoint(46,5800,1.174856517);
   graph->SetPoint(47,5900,1.196094447);
   graph->SetPoint(48,6000,1.168932288);
   graph->SetPoint(49,6100,1.145662598);
   graph->SetPoint(50,6200,1.123109613);
   graph->SetPoint(51,6300,1.123186269);
   graph->SetPoint(52,6400,1.140805071);
   graph->SetPoint(53,6500,1.167881398);
   graph->SetPoint(54,6600,1.167278699);
   graph->SetPoint(55,6700,1.135070323);
   graph->SetPoint(56,6800,1.11768498);
   graph->SetPoint(57,6900,1.110314684);
   graph->SetPoint(58,7000,1.098421474);
   graph->SetPoint(59,7100,1.091820841);
   graph->SetPoint(60,7200,1.063199253);
   graph->SetPoint(61,7300,1.064409498);
   graph->SetPoint(62,7400,1.06248616);
   graph->SetPoint(63,7500,1.049005144);
   graph->SetPoint(64,7600,1.048311885);
   graph->SetPoint(65,7700,1.046158596);
   graph->SetPoint(66,7800,6.949485523e-310);
   graph->SetPoint(67,7900,6.949485587e-310);
   graph->SetPoint(68,8000,6.949485635e-310);
   
   TH1F *Graph_Graph_Graph24 = new TH1F("Graph_Graph_Graph24","Graph",100,520,8680);
   Graph_Graph_Graph24->SetMinimum(0);
   Graph_Graph_Graph24->SetMaximum(4.823468);
   Graph_Graph_Graph24->SetDirectory(0);
   Graph_Graph_Graph24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph24->SetLineColor(ci);
   Graph_Graph_Graph24->SetMarkerStyle(8);
   Graph_Graph_Graph24->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph24->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph24->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph24->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph24->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph24->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph24->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph_Graph24->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph24->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph24->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph24->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph24->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph24);
   
   graph->Draw("lp");
   TLatex *   tex = new TLatex(0.17,0.92,"CMS");
tex->SetNDC();
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.26,0.92,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.68,0.92,"12.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.3,0.8,"gg #rightarrow X #rightarrow jj");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.55,0.74,0.92,0.87,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph1","Observed","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","Expected","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
