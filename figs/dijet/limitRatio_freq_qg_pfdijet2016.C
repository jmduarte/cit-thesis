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
   graph->SetMarkerStyle(8);
   graph->SetPoint(0,1200,3.886039886);
   graph->SetPoint(1,1300,2.888086643);
   graph->SetPoint(2,1400,2.831111111);
   graph->SetPoint(3,1500,2.348525469);
   graph->SetPoint(4,1600,2);
   graph->SetPoint(5,1700,1.816091954);
   graph->SetPoint(6,1800,1.751131222);
   graph->SetPoint(7,1900,1.724137931);
   graph->SetPoint(8,2000,1.72755418);
   graph->SetPoint(9,2100,1.727598566);
   graph->SetPoint(10,2200,1.703703704);
   graph->SetPoint(11,2300,1.647887324);
   graph->SetPoint(12,2400,1.603217158);
   graph->SetPoint(13,2500,1.547400612);
   graph->SetPoint(14,2600,1.501730104);
   graph->SetPoint(15,2700,1.462745098);
   graph->SetPoint(16,2800,1.426666667);
   graph->SetPoint(17,2900,1.39800995);
   graph->SetPoint(18,3000,1.383753501);
   graph->SetPoint(19,3100,1.364485981);
   graph->SetPoint(20,3200,1.362369338);
   graph->SetPoint(21,3300,1.355212355);
   graph->SetPoint(22,3400,1.35193133);
   graph->SetPoint(23,3500,1.363636364);
   graph->SetPoint(24,3600,1.366754617);
   graph->SetPoint(25,3700,1.366568915);
   graph->SetPoint(26,3800,1.378640777);
   graph->SetPoint(27,3900,1.370106762);
   graph->SetPoint(28,4000,1.37944664);
   graph->SetPoint(29,4100,1.372294372);
   graph->SetPoint(30,4200,1.369668246);
   graph->SetPoint(31,4300,1.362694301);
   graph->SetPoint(32,4400,1.350282486);
   graph->SetPoint(33,4500,1.347826087);
   graph->SetPoint(34,4600,1.340136054);
   graph->SetPoint(35,4700,1.325925926);
   graph->SetPoint(36,4800,1.325203252);
   graph->SetPoint(37,4900,1.300884956);
   graph->SetPoint(38,5000,1.28220854);
   graph->SetPoint(39,5100,1.264900648);
   graph->SetPoint(40,5200,1.258992819);
   graph->SetPoint(41,5300,1.232558202);
   graph->SetPoint(42,5400,1.235294082);
   graph->SetPoint(43,5500,1.220183488);
   graph->SetPoint(44,5600,1.217821813);
   graph->SetPoint(45,5700,1.215053749);
   graph->SetPoint(46,5800,1.183908007);
   graph->SetPoint(47,5900,1.172839488);
   graph->SetPoint(48,6000,1.160000006);
   graph->SetPoint(49,6100,1.140845108);
   graph->SetPoint(50,6200,1.149253674);
   graph->SetPoint(51,6300,1.126984101);
   graph->SetPoint(52,6400,1.135593299);
   graph->SetPoint(53,6500,1.105263163);
   graph->SetPoint(54,6600,1.113207558);
   graph->SetPoint(55,6700,1.117647066);
   graph->SetPoint(56,6800,1.081632574);
   graph->SetPoint(57,6900,1.085106365);
   graph->SetPoint(58,7000,1.088888939);
   graph->SetPoint(59,7100,1.093023235);
   graph->SetPoint(60,7200,1.046511583);
   graph->SetPoint(61,7300,1.046511583);
   graph->SetPoint(62,7400,1.046511583);
   graph->SetPoint(63,7500,1.046511583);
   graph->SetPoint(64,7600,1.046511583);
   graph->SetPoint(65,7700,1.044444469);
   graph->SetPoint(66,7800,1.042553214);
   graph->SetPoint(67,7900,1.037735928);
   graph->SetPoint(68,8000,1.06779665);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,520,8680);
   Graph_Graph5->SetMinimum(0.7529055);
   Graph_Graph5->SetMaximum(4.17087);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->SetMarkerStyle(8);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph5->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(69);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   graph->SetPoint(0,1200,3.800148097);
   graph->SetPoint(1,1300,3.199780145);
   graph->SetPoint(2,1400,2.940486281);
   graph->SetPoint(3,1500,2.311397995);
   graph->SetPoint(4,1600,1.657202819);
   graph->SetPoint(5,1700,1.588129566);
   graph->SetPoint(6,1800,1.636163634);
   graph->SetPoint(7,1900,1.703288088);
   graph->SetPoint(8,2000,1.699944132);
   graph->SetPoint(9,2100,1.517778649);
   graph->SetPoint(10,2200,1.424621184);
   graph->SetPoint(11,2300,1.836542008);
   graph->SetPoint(12,2400,1.588556595);
   graph->SetPoint(13,2500,1.395544179);
   graph->SetPoint(14,2600,1.431330559);
   graph->SetPoint(15,2700,1.46689274);
   graph->SetPoint(16,2800,1.289141511);
   graph->SetPoint(17,2900,1.189829643);
   graph->SetPoint(18,3000,1.291073549);
   graph->SetPoint(19,3100,1.425202403);
   graph->SetPoint(20,3200,1.425438003);
   graph->SetPoint(21,3300,1.36671803);
   graph->SetPoint(22,3400,1.363846141);
   graph->SetPoint(23,3500,1.363023175);
   graph->SetPoint(24,3600,1.339567971);
   graph->SetPoint(25,3700,1.325887575);
   graph->SetPoint(26,3800,1.352574946);
   graph->SetPoint(27,3900,1.326869813);
   graph->SetPoint(28,4000,1.344514895);
   graph->SetPoint(29,4100,1.455021547);
   graph->SetPoint(30,4200,1.443425377);
   graph->SetPoint(31,4300,1.320716746);
   graph->SetPoint(32,4400,1.220103412);
   graph->SetPoint(33,4500,1.18384443);
   graph->SetPoint(34,4600,1.202842779);
   graph->SetPoint(35,4700,1.230107978);
   graph->SetPoint(36,4800,1.242266064);
   graph->SetPoint(37,4900,1.25505796);
   graph->SetPoint(38,5000,1.257309653);
   graph->SetPoint(39,5100,1.254809378);
   graph->SetPoint(40,5200,1.226670286);
   graph->SetPoint(41,5300,1.185090544);
   graph->SetPoint(42,5400,1.209526883);
   graph->SetPoint(43,5500,1.213741673);
   graph->SetPoint(44,5600,1.151706411);
   graph->SetPoint(45,5700,1.137428453);
   graph->SetPoint(46,5800,1.160602877);
   graph->SetPoint(47,5900,1.164740721);
   graph->SetPoint(48,6000,1.146889797);
   graph->SetPoint(49,6100,1.117139928);
   graph->SetPoint(50,6200,1.105820835);
   graph->SetPoint(51,6300,1.122499081);
   graph->SetPoint(52,6400,1.135068335);
   graph->SetPoint(53,6500,1.150687252);
   graph->SetPoint(54,6600,1.149429311);
   graph->SetPoint(55,6700,1.141228759);
   graph->SetPoint(56,6800,1.106047336);
   graph->SetPoint(57,6900,1.109206901);
   graph->SetPoint(58,7000,1.069483506);
   graph->SetPoint(59,7100,1.086593016);
   graph->SetPoint(60,7200,1.069719607);
   graph->SetPoint(61,7300,1.04097343);
   graph->SetPoint(62,7400,1.048691032);
   graph->SetPoint(63,7500,1.038658436);
   graph->SetPoint(64,7600,1.033424782);
   graph->SetPoint(65,7700,1.031767342);
   graph->SetPoint(66,7800,1.032282797);
   graph->SetPoint(67,7900,1.03643123);
   graph->SetPoint(68,8000,1.044200306);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,520,8680);
   Graph_Graph6->SetMinimum(0.7549293);
   Graph_Graph6->SetMaximum(4.076986);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->SetMarkerStyle(8);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph6->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
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
   graph->SetMarkerStyle(8);
   graph->SetPoint(0,1200,3.886039886);
   graph->SetPoint(1,1300,2.888086643);
   graph->SetPoint(2,1400,2.831111111);
   graph->SetPoint(3,1500,2.348525469);
   graph->SetPoint(4,1600,2);
   graph->SetPoint(5,1700,1.816091954);
   graph->SetPoint(6,1800,1.751131222);
   graph->SetPoint(7,1900,1.724137931);
   graph->SetPoint(8,2000,1.72755418);
   graph->SetPoint(9,2100,1.727598566);
   graph->SetPoint(10,2200,1.703703704);
   graph->SetPoint(11,2300,1.647887324);
   graph->SetPoint(12,2400,1.603217158);
   graph->SetPoint(13,2500,1.547400612);
   graph->SetPoint(14,2600,1.501730104);
   graph->SetPoint(15,2700,1.462745098);
   graph->SetPoint(16,2800,1.426666667);
   graph->SetPoint(17,2900,1.39800995);
   graph->SetPoint(18,3000,1.383753501);
   graph->SetPoint(19,3100,1.364485981);
   graph->SetPoint(20,3200,1.362369338);
   graph->SetPoint(21,3300,1.355212355);
   graph->SetPoint(22,3400,1.35193133);
   graph->SetPoint(23,3500,1.363636364);
   graph->SetPoint(24,3600,1.366754617);
   graph->SetPoint(25,3700,1.366568915);
   graph->SetPoint(26,3800,1.378640777);
   graph->SetPoint(27,3900,1.370106762);
   graph->SetPoint(28,4000,1.37944664);
   graph->SetPoint(29,4100,1.372294372);
   graph->SetPoint(30,4200,1.369668246);
   graph->SetPoint(31,4300,1.362694301);
   graph->SetPoint(32,4400,1.350282486);
   graph->SetPoint(33,4500,1.347826087);
   graph->SetPoint(34,4600,1.340136054);
   graph->SetPoint(35,4700,1.325925926);
   graph->SetPoint(36,4800,1.325203252);
   graph->SetPoint(37,4900,1.300884956);
   graph->SetPoint(38,5000,1.28220854);
   graph->SetPoint(39,5100,1.264900648);
   graph->SetPoint(40,5200,1.258992819);
   graph->SetPoint(41,5300,1.232558202);
   graph->SetPoint(42,5400,1.235294082);
   graph->SetPoint(43,5500,1.220183488);
   graph->SetPoint(44,5600,1.217821813);
   graph->SetPoint(45,5700,1.215053749);
   graph->SetPoint(46,5800,1.183908007);
   graph->SetPoint(47,5900,1.172839488);
   graph->SetPoint(48,6000,1.160000006);
   graph->SetPoint(49,6100,1.140845108);
   graph->SetPoint(50,6200,1.149253674);
   graph->SetPoint(51,6300,1.126984101);
   graph->SetPoint(52,6400,1.135593299);
   graph->SetPoint(53,6500,1.105263163);
   graph->SetPoint(54,6600,1.113207558);
   graph->SetPoint(55,6700,1.117647066);
   graph->SetPoint(56,6800,1.081632574);
   graph->SetPoint(57,6900,1.085106365);
   graph->SetPoint(58,7000,1.088888939);
   graph->SetPoint(59,7100,1.093023235);
   graph->SetPoint(60,7200,1.046511583);
   graph->SetPoint(61,7300,1.046511583);
   graph->SetPoint(62,7400,1.046511583);
   graph->SetPoint(63,7500,1.046511583);
   graph->SetPoint(64,7600,1.046511583);
   graph->SetPoint(65,7700,1.044444469);
   graph->SetPoint(66,7800,1.042553214);
   graph->SetPoint(67,7900,1.037735928);
   graph->SetPoint(68,8000,1.06779665);
   
   TH1F *Graph_Graph_Graph57 = new TH1F("Graph_Graph_Graph57","Graph",100,520,8680);
   Graph_Graph_Graph57->SetMinimum(0.7529055);
   Graph_Graph_Graph57->SetMaximum(4.17087);
   Graph_Graph_Graph57->SetDirectory(0);
   Graph_Graph_Graph57->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph57->SetLineColor(ci);
   Graph_Graph_Graph57->SetMarkerStyle(8);
   Graph_Graph_Graph57->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph57->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph57->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph57->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph57->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph57->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph57->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph_Graph57->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph57->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph57->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph57->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph57->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph57->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph57);
   
   graph->Draw("c");
   
   graph = new TGraph(69);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   graph->SetPoint(0,1200,3.800148097);
   graph->SetPoint(1,1300,3.199780145);
   graph->SetPoint(2,1400,2.940486281);
   graph->SetPoint(3,1500,2.311397995);
   graph->SetPoint(4,1600,1.657202819);
   graph->SetPoint(5,1700,1.588129566);
   graph->SetPoint(6,1800,1.636163634);
   graph->SetPoint(7,1900,1.703288088);
   graph->SetPoint(8,2000,1.699944132);
   graph->SetPoint(9,2100,1.517778649);
   graph->SetPoint(10,2200,1.424621184);
   graph->SetPoint(11,2300,1.836542008);
   graph->SetPoint(12,2400,1.588556595);
   graph->SetPoint(13,2500,1.395544179);
   graph->SetPoint(14,2600,1.431330559);
   graph->SetPoint(15,2700,1.46689274);
   graph->SetPoint(16,2800,1.289141511);
   graph->SetPoint(17,2900,1.189829643);
   graph->SetPoint(18,3000,1.291073549);
   graph->SetPoint(19,3100,1.425202403);
   graph->SetPoint(20,3200,1.425438003);
   graph->SetPoint(21,3300,1.36671803);
   graph->SetPoint(22,3400,1.363846141);
   graph->SetPoint(23,3500,1.363023175);
   graph->SetPoint(24,3600,1.339567971);
   graph->SetPoint(25,3700,1.325887575);
   graph->SetPoint(26,3800,1.352574946);
   graph->SetPoint(27,3900,1.326869813);
   graph->SetPoint(28,4000,1.344514895);
   graph->SetPoint(29,4100,1.455021547);
   graph->SetPoint(30,4200,1.443425377);
   graph->SetPoint(31,4300,1.320716746);
   graph->SetPoint(32,4400,1.220103412);
   graph->SetPoint(33,4500,1.18384443);
   graph->SetPoint(34,4600,1.202842779);
   graph->SetPoint(35,4700,1.230107978);
   graph->SetPoint(36,4800,1.242266064);
   graph->SetPoint(37,4900,1.25505796);
   graph->SetPoint(38,5000,1.257309653);
   graph->SetPoint(39,5100,1.254809378);
   graph->SetPoint(40,5200,1.226670286);
   graph->SetPoint(41,5300,1.185090544);
   graph->SetPoint(42,5400,1.209526883);
   graph->SetPoint(43,5500,1.213741673);
   graph->SetPoint(44,5600,1.151706411);
   graph->SetPoint(45,5700,1.137428453);
   graph->SetPoint(46,5800,1.160602877);
   graph->SetPoint(47,5900,1.164740721);
   graph->SetPoint(48,6000,1.146889797);
   graph->SetPoint(49,6100,1.117139928);
   graph->SetPoint(50,6200,1.105820835);
   graph->SetPoint(51,6300,1.122499081);
   graph->SetPoint(52,6400,1.135068335);
   graph->SetPoint(53,6500,1.150687252);
   graph->SetPoint(54,6600,1.149429311);
   graph->SetPoint(55,6700,1.141228759);
   graph->SetPoint(56,6800,1.106047336);
   graph->SetPoint(57,6900,1.109206901);
   graph->SetPoint(58,7000,1.069483506);
   graph->SetPoint(59,7100,1.086593016);
   graph->SetPoint(60,7200,1.069719607);
   graph->SetPoint(61,7300,1.04097343);
   graph->SetPoint(62,7400,1.048691032);
   graph->SetPoint(63,7500,1.038658436);
   graph->SetPoint(64,7600,1.033424782);
   graph->SetPoint(65,7700,1.031767342);
   graph->SetPoint(66,7800,1.032282797);
   graph->SetPoint(67,7900,1.03643123);
   graph->SetPoint(68,8000,1.044200306);
   
   TH1F *Graph_Graph_Graph68 = new TH1F("Graph_Graph_Graph68","Graph",100,520,8680);
   Graph_Graph_Graph68->SetMinimum(0.7549293);
   Graph_Graph_Graph68->SetMaximum(4.076986);
   Graph_Graph_Graph68->SetDirectory(0);
   Graph_Graph_Graph68->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph68->SetLineColor(ci);
   Graph_Graph_Graph68->SetMarkerStyle(8);
   Graph_Graph_Graph68->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph68->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph68->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph68->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph68->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph68->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph68->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph_Graph68->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph68->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph68->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph68->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph68->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph68->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph68);
   
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
      tex = new TLatex(0.3,0.8,"qg #rightarrow X #rightarrow jj");
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
