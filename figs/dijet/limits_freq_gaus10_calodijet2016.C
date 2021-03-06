{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  8 11:02:50 2016) by ROOT version5.34/31
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(377.7778,-4.578947,1684.967,5.947368);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogy();
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
   multigraph->SetTitle(" ;Resonance mass [GeV]; #sigma #times #bf{#it{#Beta}} #times #bf{#it{#Alpha}} [pb]");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(8);
   grae->SetPoint(0,600,4.628906);
   grae->SetPointError(0,0,0,2.215004,5.360669);
   grae->SetPoint(1,650,3.154297);
   grae->SetPointError(1,0,0,1.50938,3.600099);
   grae->SetPoint(2,700,2.275391);
   grae->SetPointError(2,0,0,1.079922,2.384827);
   grae->SetPoint(3,750,1.821289);
   grae->SetPointError(3,0,0,0.8572865,1.831297);
   grae->SetPoint(4,800,1.577148);
   grae->SetPointError(4,0,0,0.7423687,1.55782);
   grae->SetPoint(5,850,1.401367);
   grae->SetPointError(5,0,0,0.6596279,1.409068);
   grae->SetPoint(6,900,1.254883);
   grae->SetPointError(6,0,0,0.5931282,1.261778);
   grae->SetPoint(7,950,1.098633);
   grae->SetPointError(7,0,0,0.5192757,1.137753);
   grae->SetPoint(8,1000,0.9521484);
   grae->SetPointError(8,0,0,0.4500389,0.9741627);
   grae->SetPoint(9,1050,0.8154297);
   grae->SetPointError(9,0,0,0.3854179,0.8342829);
   grae->SetPoint(10,1100,0.6982422);
   grae->SetPointError(10,0,0,0.3300285,0.7020789);
   grae->SetPoint(11,1150,0.6005859);
   grae->SetPointError(11,0,0,0.2768326,0.605429);
   grae->SetPoint(12,1200,0.5322266);
   grae->SetPointError(12,0,0,0.2536392,0.5175909);
   grae->SetPoint(13,1250,0.4736328);
   grae->SetPointError(13,0,0,0.2257156,0.4546202);
   grae->SetPoint(14,1300,0.4248047);
   grae->SetPointError(14,0,0,0.1958084,0.413123);
   grae->SetPoint(15,1350,0.3857422);
   grae->SetPointError(15,0,0,0.177803,0.3864383);
   grae->SetPoint(16,1400,0.3662109);
   grae->SetPointError(16,0,0,0.1745224,0.3538255);
   grae->SetPoint(17,1450,0.3466797);
   grae->SetPointError(17,0,0,0.1652145,0.3349548);
   grae->SetPoint(18,1500,0.3369141);
   grae->SetPointError(18,0,0,0.1605606,0.3340388);
   grae->SetPoint(19,1550,0.3271484);
   grae->SetPointError(19,0,0,0.150795,0.3392306);
   grae->SetPoint(20,1600,0.3271484);
   grae->SetPointError(20,0,0,0.1559067,0.34734);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,500,1700);
   Graph_Graph1->SetMinimum(0.1541176);
   Graph_Graph1->SetMaximum(10.97141);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

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
   grae->SetHistogram(Graph_Graph1);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(21);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(8);
   grae->SetPoint(0,600,4.628906);
   grae->SetPointError(0,0,0,1.375725,2.232573);
   grae->SetPoint(1,650,3.154297);
   grae->SetPointError(1,0,0,0.9374666,1.496206);
   grae->SetPoint(2,700,2.275391);
   grae->SetPointError(2,0,0,0.6707326,1.006748);
   grae->SetPoint(3,750,1.821289);
   grae->SetPointError(3,0,0,0.5257577,0.7913113);
   grae->SetPoint(4,800,1.577148);
   grae->SetPointError(4,0,0,0.4552808,0.6726642);
   grae->SetPoint(5,850,1.401367);
   grae->SetPointError(5,0,0,0.4045375,0.6088641);
   grae->SetPoint(6,900,1.254883);
   grae->SetPointError(6,0,0,0.3660713,0.5452198);
   grae->SetPoint(7,950,1.098633);
   grae->SetPointError(7,0,0,0.3204904,0.4860909);
   grae->SetPoint(8,1000,0.9521484);
   grae->SetPointError(8,0,0,0.2777584,0.4212788);
   grae->SetPoint(9,1050,0.8154297);
   grae->SetPointError(9,0,0,0.2378751,0.3607875);
   grae->SetPoint(10,1100,0.6982422);
   grae->SetPointError(10,0,0,0.2036895,0.3033713);
   grae->SetPoint(11,1150,0.6005859);
   grae->SetPointError(11,0,0,0.1686949,0.2633357);
   grae->SetPoint(12,1200,0.5322266);
   grae->SetPointError(12,0,0,0.1545614,0.2248766);
   grae->SetPoint(13,1250,0.4736328);
   grae->SetPointError(13,0,0,0.1375455,0.2001196);
   grae->SetPoint(14,1300,0.4248047);
   grae->SetPointError(14,0,0,0.1254398,0.1794887);
   grae->SetPoint(15,1350,0.3857422);
   grae->SetPointError(15,0,0,0.1083487,0.1691343);
   grae->SetPoint(16,1400,0.3662109);
   grae->SetPointError(16,0,0,0.1063496,0.1547316);
   grae->SetPoint(17,1450,0.3466797);
   grae->SetPointError(17,0,0,0.1006776,0.1464793);
   grae->SetPoint(18,1500,0.3369141);
   grae->SetPointError(18,0,0,0.09784162,0.1423531);
   grae->SetPoint(19,1550,0.3271484);
   grae->SetPointError(19,0,0,0.08953452,0.1486592);
   grae->SetPoint(20,1600,0.3271484);
   grae->SetPointError(20,0,0,0.09256959,0.1486592);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,500,1700);
   Graph_Graph2->SetMinimum(0.211121);
   Graph_Graph2->SetMaximum(7.524169);
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
   grae->SetHistogram(Graph_Graph2);
   
   multigraph->Add(grae,"");
   
   TGraph *graph = new TGraph(21);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,600,2.467909346);
   graph->SetPoint(1,650,2.345198241);
   graph->SetPoint(2,700,2.700268224);
   graph->SetPoint(3,750,3.099186083);
   graph->SetPoint(4,800,3.093988591);
   graph->SetPoint(5,850,2.76193245);
   graph->SetPoint(6,900,2.100906124);
   graph->SetPoint(7,950,1.26737506);
   graph->SetPoint(8,1000,0.8277581259);
   graph->SetPoint(9,1050,0.661058107);
   graph->SetPoint(10,1100,0.5893361355);
   graph->SetPoint(11,1150,0.5212584185);
   graph->SetPoint(12,1200,0.4349278084);
   graph->SetPoint(13,1250,0.3411527819);
   graph->SetPoint(14,1300,0.2649325326);
   graph->SetPoint(15,1350,0.2126899497);
   graph->SetPoint(16,1400,0.1855903152);
   graph->SetPoint(17,1450,0.1736144996);
   graph->SetPoint(18,1500,0.1852860517);
   graph->SetPoint(19,1550,0.2236239157);
   graph->SetPoint(20,1600,0.3150584281);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,500,1700);
   Graph_Graph1->SetMinimum(0.156253);
   Graph_Graph1->SetMaximum(3.391743);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

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
   multigraph->Draw("a3");
   multigraph->GetXaxis()->SetTitle("Resonance mass [GeV]");
   multigraph->GetXaxis()->SetNdivisions(408);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle(" #sigma #times #bf{#it{#Beta}} #times #bf{#it{#Alpha}} [pb]");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.052);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   graph = new TGraph(21);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(8);
   graph->SetPoint(0,600,4.62890625);
   graph->SetPoint(1,650,3.154296875);
   graph->SetPoint(2,700,2.275390625);
   graph->SetPoint(3,750,1.821289062);
   graph->SetPoint(4,800,1.577148438);
   graph->SetPoint(5,850,1.401367188);
   graph->SetPoint(6,900,1.254882812);
   graph->SetPoint(7,950,1.098632812);
   graph->SetPoint(8,1000,0.9521484375);
   graph->SetPoint(9,1050,0.8154296875);
   graph->SetPoint(10,1100,0.6982421875);
   graph->SetPoint(11,1150,0.6005859375);
   graph->SetPoint(12,1200,0.5322265625);
   graph->SetPoint(13,1250,0.4736328125);
   graph->SetPoint(14,1300,0.4248046875);
   graph->SetPoint(15,1350,0.3857421875);
   graph->SetPoint(16,1400,0.3662109375);
   graph->SetPoint(17,1450,0.3466796875);
   graph->SetPoint(18,1500,0.3369140625);
   graph->SetPoint(19,1550,0.3271484375);
   graph->SetPoint(20,1600,0.3271484375);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,500,1700);
   Graph_Graph2->SetMinimum(0.2944336);
   Graph_Graph2->SetMaximum(5.059082);
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
   
   graph->Draw("c ");
   
   graph = new TGraph(21);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,600,2.467909346);
   graph->SetPoint(1,650,2.345198241);
   graph->SetPoint(2,700,2.700268224);
   graph->SetPoint(3,750,3.099186083);
   graph->SetPoint(4,800,3.093988591);
   graph->SetPoint(5,850,2.76193245);
   graph->SetPoint(6,900,2.100906124);
   graph->SetPoint(7,950,1.26737506);
   graph->SetPoint(8,1000,0.8277581259);
   graph->SetPoint(9,1050,0.661058107);
   graph->SetPoint(10,1100,0.5893361355);
   graph->SetPoint(11,1150,0.5212584185);
   graph->SetPoint(12,1200,0.4349278084);
   graph->SetPoint(13,1250,0.3411527819);
   graph->SetPoint(14,1300,0.2649325326);
   graph->SetPoint(15,1350,0.2126899497);
   graph->SetPoint(16,1400,0.1855903152);
   graph->SetPoint(17,1450,0.1736144996);
   graph->SetPoint(18,1500,0.1852860517);
   graph->SetPoint(19,1550,0.2236239157);
   graph->SetPoint(20,1600,0.3150584281);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","Graph",100,500,1700);
   Graph_Graph_Graph13->SetMinimum(0.156253);
   Graph_Graph_Graph13->SetMaximum(3.391743);
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
   
   graph->Draw("lp ");
   TLatex *   tex = new TLatex(0.2,0.835,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.63,0.92,"12.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.3,0.77,"#splitline{Gaussian}{10% width}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.55,0.68,0.92,0.87,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);

   ci = 1923;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   leg->SetFillColor(ci);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","95% CL limits","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Observed","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Expected #pm 1 s.d.","lf");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Expected #pm 2 s.d.","lf");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   graph = new TGraph(21);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(8);
   graph->SetPoint(0,600,4.62890625);
   graph->SetPoint(1,650,3.154296875);
   graph->SetPoint(2,700,2.275390625);
   graph->SetPoint(3,750,1.821289062);
   graph->SetPoint(4,800,1.577148438);
   graph->SetPoint(5,850,1.401367188);
   graph->SetPoint(6,900,1.254882812);
   graph->SetPoint(7,950,1.098632812);
   graph->SetPoint(8,1000,0.9521484375);
   graph->SetPoint(9,1050,0.8154296875);
   graph->SetPoint(10,1100,0.6982421875);
   graph->SetPoint(11,1150,0.6005859375);
   graph->SetPoint(12,1200,0.5322265625);
   graph->SetPoint(13,1250,0.4736328125);
   graph->SetPoint(14,1300,0.4248046875);
   graph->SetPoint(15,1350,0.3857421875);
   graph->SetPoint(16,1400,0.3662109375);
   graph->SetPoint(17,1450,0.3466796875);
   graph->SetPoint(18,1500,0.3369140625);
   graph->SetPoint(19,1550,0.3271484375);
   graph->SetPoint(20,1600,0.3271484375);
   
   TH1F *Graph_Graph_Graph24 = new TH1F("Graph_Graph_Graph24","Graph",100,500,1700);
   Graph_Graph_Graph24->SetMinimum(0.2944336);
   Graph_Graph_Graph24->SetMaximum(5.059082);
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
   
   graph->Draw("c ");
   
   graph = new TGraph(21);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,600,2.467909346);
   graph->SetPoint(1,650,2.345198241);
   graph->SetPoint(2,700,2.700268224);
   graph->SetPoint(3,750,3.099186083);
   graph->SetPoint(4,800,3.093988591);
   graph->SetPoint(5,850,2.76193245);
   graph->SetPoint(6,900,2.100906124);
   graph->SetPoint(7,950,1.26737506);
   graph->SetPoint(8,1000,0.8277581259);
   graph->SetPoint(9,1050,0.661058107);
   graph->SetPoint(10,1100,0.5893361355);
   graph->SetPoint(11,1150,0.5212584185);
   graph->SetPoint(12,1200,0.4349278084);
   graph->SetPoint(13,1250,0.3411527819);
   graph->SetPoint(14,1300,0.2649325326);
   graph->SetPoint(15,1350,0.2126899497);
   graph->SetPoint(16,1400,0.1855903152);
   graph->SetPoint(17,1450,0.1736144996);
   graph->SetPoint(18,1500,0.1852860517);
   graph->SetPoint(19,1550,0.2236239157);
   graph->SetPoint(20,1600,0.3150584281);
   
   TH1F *Graph_Graph_Graph_Graph135 = new TH1F("Graph_Graph_Graph_Graph135","Graph",100,500,1700);
   Graph_Graph_Graph_Graph135->SetMinimum(0.156253);
   Graph_Graph_Graph_Graph135->SetMaximum(3.391743);
   Graph_Graph_Graph_Graph135->SetDirectory(0);
   Graph_Graph_Graph_Graph135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph135->SetLineColor(ci);
   Graph_Graph_Graph_Graph135->SetMarkerStyle(8);
   Graph_Graph_Graph_Graph135->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph135->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph135->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph135->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph135->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph135->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph135->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph_Graph_Graph135->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph135->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph135->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph135->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph135->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph135->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph135);
   
   graph->Draw("lp ");
   
   TH1F *__1 = new TH1F("__1"," ",100,600,1600);
   __1->SetMinimum(0.001);
   __1->SetMaximum(100000);
   __1->SetDirectory(0);
   __1->SetStats(0);

   ci = TColor::GetColor("#000099");
   __1->SetLineColor(ci);
   __1->SetMarkerStyle(8);
   __1->GetXaxis()->SetTitle("Resonance mass [GeV]");
   __1->GetXaxis()->SetNdivisions(408);
   __1->GetXaxis()->SetLabelFont(42);
   __1->GetXaxis()->SetLabelSize(0.05);
   __1->GetXaxis()->SetTitleSize(0.06);
   __1->GetXaxis()->SetTitleFont(42);
   __1->GetYaxis()->SetTitle(" #sigma #times #bf{#it{#Beta}} #times #bf{#it{#Alpha}} [pb]");
   __1->GetYaxis()->SetLabelFont(42);
   __1->GetYaxis()->SetLabelSize(0.05);
   __1->GetYaxis()->SetTitleSize(0.052);
   __1->GetYaxis()->SetTitleOffset(1.2);
   __1->GetYaxis()->SetTitleFont(42);
   __1->GetZaxis()->SetLabelFont(42);
   __1->GetZaxis()->SetLabelSize(0.05);
   __1->GetZaxis()->SetTitleSize(0.06);
   __1->GetZaxis()->SetTitleFont(42);
   __1->Draw("sameaxis");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
