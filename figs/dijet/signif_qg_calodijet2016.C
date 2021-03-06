{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  8 11:02:40 2016) by ROOT version5.34/31
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(377.7778,-0.7894737,1684.967,4.473684);
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
   multigraph->SetTitle(" ;Resonance mass [GeV];Local significance n#sigma");
   
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
   grae->SetPoint(0,600,0);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,650,0);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,700,0);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,750,0);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,800,0);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,850,0);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,900,0);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,950,0);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1000,0);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1050,0);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1100,0);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1150,0);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,1200,0);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,1250,0);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,1300,0);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,1350,0);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,1400,0);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,1450,0);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,1500,0);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,1550,0);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,1600,0);
   grae->SetPointError(20,0,0,0,0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,500,1700);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.1);
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
   grae->SetPoint(0,600,0);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,650,0);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,700,0);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,750,0);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,800,0);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,850,0);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,900,0);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,950,0);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1000,0);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1050,0);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1100,0);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1150,0);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,1200,0);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,1250,0);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,1300,0);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,1350,0);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,1400,0);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,1450,0);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,1500,0);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,1550,0);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,1600,0);
   grae->SetPointError(20,0,0,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,500,1700);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(1.1);
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

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   graph->SetPoint(0,600,0);
   graph->SetPoint(1,650,0);
   graph->SetPoint(2,700,0);
   graph->SetPoint(3,750,0.8299228638);
   graph->SetPoint(4,800,1.795561791);
   graph->SetPoint(5,850,2.455631024);
   graph->SetPoint(6,900,2.227231352);
   graph->SetPoint(7,950,1.328778362);
   graph->SetPoint(8,1000,0);
   graph->SetPoint(9,1050,0);
   graph->SetPoint(10,1100,0);
   graph->SetPoint(11,1150,0);
   graph->SetPoint(12,1200,0);
   graph->SetPoint(13,1250,0);
   graph->SetPoint(14,1300,0);
   graph->SetPoint(15,1350,0);
   graph->SetPoint(16,1400,0);
   graph->SetPoint(17,1450,0.0005957222695);
   graph->SetPoint(18,1500,0);
   graph->SetPoint(19,1550,0);
   graph->SetPoint(20,1600,0.0006257289799);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,500,1700);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(2.701194);
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
   
   graph = new TGraph(96);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(10);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,500,7483);
   graph->SetPoint(1,550,5185);
   graph->SetPoint(2,600,3676);
   graph->SetPoint(3,650,2664);
   graph->SetPoint(4,700,1963);
   graph->SetPoint(5,750,1468);
   graph->SetPoint(6,800,1114);
   graph->SetPoint(7,850,854.6);
   graph->SetPoint(8,900,662.8);
   graph->SetPoint(9,950,519);
   graph->SetPoint(10,1000,410.1);
   graph->SetPoint(11,1050,326.6);
   graph->SetPoint(12,1100,262);
   graph->SetPoint(13,1150,211.6);
   graph->SetPoint(14,1200,172.1);
   graph->SetPoint(15,1250,140.7);
   graph->SetPoint(16,1300,115.7);
   graph->SetPoint(17,1350,95.58);
   graph->SetPoint(18,1400,79.34);
   graph->SetPoint(19,1450,66.16);
   graph->SetPoint(20,1500,55.4);
   graph->SetPoint(21,1600,39.28);
   graph->SetPoint(22,1700,28.23);
   graph->SetPoint(23,1800,20.54);
   graph->SetPoint(24,1900,15.1);
   graph->SetPoint(25,2000,11.21);
   graph->SetPoint(26,2100,8.39);
   graph->SetPoint(27,2200,6.328);
   graph->SetPoint(28,2300,4.807);
   graph->SetPoint(29,2400,3.674);
   graph->SetPoint(30,2500,2.824);
   graph->SetPoint(31,2600,2.182);
   graph->SetPoint(32,2700,1.694);
   graph->SetPoint(33,2800,1.32);
   graph->SetPoint(34,2900,1.033);
   graph->SetPoint(35,3000,0.8116);
   graph->SetPoint(36,3100,0.6395);
   graph->SetPoint(37,3200,0.5054);
   graph->SetPoint(38,3300,0.4006);
   graph->SetPoint(39,3400,0.3182);
   graph->SetPoint(40,3500,0.2534);
   graph->SetPoint(41,3600,0.2022);
   graph->SetPoint(42,3700,0.1616);
   graph->SetPoint(43,3800,0.1294);
   graph->SetPoint(44,3900,0.1038);
   graph->SetPoint(45,4000,0.08333);
   graph->SetPoint(46,4100,0.067);
   graph->SetPoint(47,4200,0.05392);
   graph->SetPoint(48,4300,0.04344);
   graph->SetPoint(49,4400,0.03503);
   graph->SetPoint(50,4500,0.02827);
   graph->SetPoint(51,4600,0.02283);
   graph->SetPoint(52,4700,0.01844);
   graph->SetPoint(53,4800,0.0149);
   graph->SetPoint(54,4900,0.01205);
   graph->SetPoint(55,5000,0.009743);
   graph->SetPoint(56,5100,0.00788);
   graph->SetPoint(57,5200,0.006373);
   graph->SetPoint(58,5300,0.005155);
   graph->SetPoint(59,5400,0.004169);
   graph->SetPoint(60,5500,0.003371);
   graph->SetPoint(61,5600,0.002725);
   graph->SetPoint(62,5700,0.002202);
   graph->SetPoint(63,5800,0.001779);
   graph->SetPoint(64,5900,0.001437);
   graph->SetPoint(65,6000,0.001159);
   graph->SetPoint(66,6100,0.0009353);
   graph->SetPoint(67,6200,0.0007541);
   graph->SetPoint(68,6300,0.0006076);
   graph->SetPoint(69,6400,0.0004891);
   graph->SetPoint(70,6500,0.0003935);
   graph->SetPoint(71,6600,0.0003164);
   graph->SetPoint(72,6700,0.0002541);
   graph->SetPoint(73,6800,0.0002039);
   graph->SetPoint(74,6900,0.0001635);
   graph->SetPoint(75,7000,0.000131);
   graph->SetPoint(76,7100,0.0001049);
   graph->SetPoint(77,7200,8.385e-05);
   graph->SetPoint(78,7300,6.699e-05);
   graph->SetPoint(79,7400,5.347e-05);
   graph->SetPoint(80,7500,4.264e-05);
   graph->SetPoint(81,7600,3.397e-05);
   graph->SetPoint(82,7700,2.704e-05);
   graph->SetPoint(83,7800,2.151e-05);
   graph->SetPoint(84,7900,1.709e-05);
   graph->SetPoint(85,8000,1.357e-05);
   graph->SetPoint(86,8100,1.077e-05);
   graph->SetPoint(87,8200,8.544e-06);
   graph->SetPoint(88,8300,6.773e-06);
   graph->SetPoint(89,8400,5.367e-06);
   graph->SetPoint(90,8500,4.251e-06);
   graph->SetPoint(91,8600,3.367e-06);
   graph->SetPoint(92,8700,2.666e-06);
   graph->SetPoint(93,8800,2.112e-06);
   graph->SetPoint(94,8900,1.673e-06);
   graph->SetPoint(95,9000,1.326e-06);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0,9850);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(8231.3);
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
   multigraph->GetXaxis()->SetTitle("Resonance mass [GeV]");
   multigraph->GetXaxis()->SetNdivisions(408);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Local significance n#sigma");
   multigraph->GetYaxis()->SetNdivisions(405);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.052);
   multigraph->GetYaxis()->SetTitleOffset(1.2);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   graph = new TGraph(21);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   graph->SetPoint(0,600,0);
   graph->SetPoint(1,650,0);
   graph->SetPoint(2,700,0);
   graph->SetPoint(3,750,0.8299228638);
   graph->SetPoint(4,800,1.795561791);
   graph->SetPoint(5,850,2.455631024);
   graph->SetPoint(6,900,2.227231352);
   graph->SetPoint(7,950,1.328778362);
   graph->SetPoint(8,1000,0);
   graph->SetPoint(9,1050,0);
   graph->SetPoint(10,1100,0);
   graph->SetPoint(11,1150,0);
   graph->SetPoint(12,1200,0);
   graph->SetPoint(13,1250,0);
   graph->SetPoint(14,1300,0);
   graph->SetPoint(15,1350,0);
   graph->SetPoint(16,1400,0);
   graph->SetPoint(17,1450,0.0005957222695);
   graph->SetPoint(18,1500,0);
   graph->SetPoint(19,1550,0);
   graph->SetPoint(20,1600,0.0006257289799);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","Graph",100,500,1700);
   Graph_Graph_Graph13->SetMinimum(0);
   Graph_Graph_Graph13->SetMaximum(2.701194);
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
      tex = new TLatex(0.3,0.77,"quark-gluon");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.55,0.79,0.92,0.87,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);

   ci = 1923;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   leg->SetFillColor(ci);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Observed","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   graph = new TGraph(21);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   graph->SetPoint(0,600,0);
   graph->SetPoint(1,650,0);
   graph->SetPoint(2,700,0);
   graph->SetPoint(3,750,0.8299228638);
   graph->SetPoint(4,800,1.795561791);
   graph->SetPoint(5,850,2.455631024);
   graph->SetPoint(6,900,2.227231352);
   graph->SetPoint(7,950,1.328778362);
   graph->SetPoint(8,1000,0);
   graph->SetPoint(9,1050,0);
   graph->SetPoint(10,1100,0);
   graph->SetPoint(11,1150,0);
   graph->SetPoint(12,1200,0);
   graph->SetPoint(13,1250,0);
   graph->SetPoint(14,1300,0);
   graph->SetPoint(15,1350,0);
   graph->SetPoint(16,1400,0);
   graph->SetPoint(17,1450,0.0005957222695);
   graph->SetPoint(18,1500,0);
   graph->SetPoint(19,1550,0);
   graph->SetPoint(20,1600,0.0006257289799);
   
   TH1F *Graph_Graph_Graph_Graph134 = new TH1F("Graph_Graph_Graph_Graph134","Graph",100,500,1700);
   Graph_Graph_Graph_Graph134->SetMinimum(0);
   Graph_Graph_Graph_Graph134->SetMaximum(2.701194);
   Graph_Graph_Graph_Graph134->SetDirectory(0);
   Graph_Graph_Graph_Graph134->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph134->SetLineColor(ci);
   Graph_Graph_Graph_Graph134->SetMarkerStyle(8);
   Graph_Graph_Graph_Graph134->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph134->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph134->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph134->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph134->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph134->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph134->GetYaxis()->SetTitleSize(0.052);
   Graph_Graph_Graph_Graph134->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph134->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph134->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph134->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph134->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph134->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph134);
   
   graph->Draw("lp ");
   
   TH1F *__1 = new TH1F("__1"," ",100,600,1600);
   __1->SetMinimum(0);
   __1->SetMaximum(4);
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
   __1->GetYaxis()->SetTitle("Local significance n#sigma");
   __1->GetYaxis()->SetNdivisions(405);
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
