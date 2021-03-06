{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  8 11:02:33 2016) by ROOT version5.34/31
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
   grae->SetPoint(0,600,27.89062);
   grae->SetPointError(0,0,0,13.01926,26.34328);
   grae->SetPoint(1,650,20.23438);
   grae->SetPointError(1,0,0,9.603424,20.5535);
   grae->SetPoint(2,700,11.91406);
   grae->SetPointError(2,0,0,5.654526,11.68049);
   grae->SetPoint(3,750,8.007812);
   grae->SetPointError(3,0,0,3.738022,7.707682);
   grae->SetPoint(4,800,6.425781);
   grae->SetPointError(4,0,0,2.999535,5.987842);
   grae->SetPoint(5,850,5.527344);
   grae->SetPointError(5,0,0,2.580147,5.120513);
   grae->SetPoint(6,900,4.863281);
   grae->SetPointError(6,0,0,2.251167,4.531832);
   grae->SetPoint(7,950,4.238281);
   grae->SetPointError(7,0,0,1.961861,4.003145);
   grae->SetPoint(8,1000,3.583984);
   grae->SetPointError(8,0,0,1.672993,3.385148);
   grae->SetPoint(9,1050,2.978516);
   grae->SetPointError(9,0,0,1.390362,2.829317);
   grae->SetPoint(10,1100,2.451172);
   grae->SetPointError(10,0,0,1.144199,2.315183);
   grae->SetPoint(11,1150,2.021484);
   grae->SetPointError(11,0,0,0.9436226,1.909334);
   grae->SetPoint(12,1200,1.704102);
   grae->SetPointError(12,0,0,0.7954693,1.60956);
   grae->SetPoint(13,1250,1.469727);
   grae->SetPointError(13,0,0,0.6860638,1.369559);
   grae->SetPoint(14,1300,1.303711);
   grae->SetPointError(14,0,0,0.6085682,1.207754);
   grae->SetPoint(15,1350,1.186523);
   grae->SetPointError(15,0,0,0.551548,1.084079);
   grae->SetPoint(16,1400,1.069336);
   grae->SetPointError(16,0,0,0.4970741,0.9906295);
   grae->SetPoint(17,1450,0.9716797);
   grae->SetPointError(17,0,0,0.4516792,0.8877851);
   grae->SetPoint(18,1500,0.8935547);
   grae->SetPointError(18,0,0,0.4153633,0.8164054);
   grae->SetPoint(19,1550,0.8349609);
   grae->SetPointError(19,0,0,0.3881264,0.7628706);
   grae->SetPoint(20,1600,0.7861328);
   grae->SetPointError(20,0,0,0.3654289,0.7182583);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,500,1700);
   Graph_Graph1->SetMinimum(0.3786335);
   Graph_Graph1->SetMaximum(59.61522);
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
   grae->SetPoint(0,600,27.89062);
   grae->SetPointError(0,0,0,7.984467,11.67319);
   grae->SetPoint(1,650,20.23438);
   grae->SetPointError(1,0,0,5.889599,9.114025);
   grae->SetPoint(2,700,11.91406);
   grae->SetPointError(2,0,0,3.51199,5.176406);
   grae->SetPoint(3,750,8.007812);
   grae->SetPointError(3,0,0,2.292459,3.415384);
   grae->SetPoint(4,800,6.425781);
   grae->SetPointError(4,0,0,1.839558,2.689411);
   grae->SetPoint(5,850,5.527344);
   grae->SetPointError(5,0,0,1.582355,2.269319);
   grae->SetPoint(6,900,4.863281);
   grae->SetPointError(6,0,0,1.380599,2.035451);
   grae->SetPoint(7,950,4.238281);
   grae->SetPointError(7,0,0,1.203172,1.773867);
   grae->SetPoint(8,1000,3.583984);
   grae->SetPointError(8,0,0,1.039085,1.500021);
   grae->SetPoint(9,1050,2.978516);
   grae->SetPointError(9,0,0,0.8526829,1.270356);
   grae->SetPoint(10,1100,2.451172);
   grae->SetPointError(10,0,0,0.7106552,1.0259);
   grae->SetPoint(11,1150,2.021484);
   grae->SetPointError(11,0,0,0.578706,0.8460608);
   grae->SetPoint(12,1200,1.704102);
   grae->SetPointError(12,0,0,0.4878464,0.7132253);
   grae->SetPoint(13,1250,1.469727);
   grae->SetPointError(13,0,0,0.4207501,0.6151313);
   grae->SetPoint(14,1300,1.303711);
   grae->SetPointError(14,0,0,0.3756007,0.5352548);
   grae->SetPoint(15,1350,1.186523);
   grae->SetPointError(15,0,0,0.3404085,0.4871419);
   grae->SetPoint(16,1400,1.069336);
   grae->SetPointError(16,0,0,0.2990212,0.4390292);
   grae->SetPoint(17,1450,0.9716797);
   grae->SetPointError(17,0,0,0.2717133,0.3989352);
   grae->SetPoint(18,1500,0.8935547);
   grae->SetPointError(18,0,0,0.249867,0.36686);
   grae->SetPoint(19,1550,0.8349609);
   grae->SetPointError(19,0,0,0.2334823,0.3428036);
   grae->SetPoint(20,1600,0.7861328);
   grae->SetPointError(20,0,0,0.2198283,0.3227566);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,500,1700);
   Graph_Graph2->SetMinimum(0.509674);
   Graph_Graph2->SetMaximum(43.46356);
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
   graph->SetPoint(0,600,21.3931007);
   graph->SetPoint(1,650,17.46423919);
   graph->SetPoint(2,700,10.71696658);
   graph->SetPoint(3,750,9.535403862);
   graph->SetPoint(4,800,10.75775095);
   graph->SetPoint(5,850,12.02766309);
   graph->SetPoint(6,900,10.84148805);
   graph->SetPoint(7,950,7.964669334);
   graph->SetPoint(8,1000,4.585051599);
   graph->SetPoint(9,1050,2.359428671);
   graph->SetPoint(10,1100,1.508211515);
   graph->SetPoint(11,1150,1.306547825);
   graph->SetPoint(12,1200,1.272692496);
   graph->SetPoint(13,1250,1.223685729);
   graph->SetPoint(14,1300,1.067928772);
   graph->SetPoint(15,1350,0.8495122362);
   graph->SetPoint(16,1400,0.6545923074);
   graph->SetPoint(17,1450,0.5349122342);
   graph->SetPoint(18,1500,0.4697875674);
   graph->SetPoint(19,1550,0.43057141);
   graph->SetPoint(20,1600,0.4203805337);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,500,1700);
   Graph_Graph1->SetMinimum(0.3783425);
   Graph_Graph1->SetMaximum(23.49037);
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
   graph->SetPoint(0,600,27.890625);
   graph->SetPoint(1,650,20.234375);
   graph->SetPoint(2,700,11.9140625);
   graph->SetPoint(3,750,8.0078125);
   graph->SetPoint(4,800,6.42578125);
   graph->SetPoint(5,850,5.52734375);
   graph->SetPoint(6,900,4.86328125);
   graph->SetPoint(7,950,4.23828125);
   graph->SetPoint(8,1000,3.583984375);
   graph->SetPoint(9,1050,2.978515625);
   graph->SetPoint(10,1100,2.451171875);
   graph->SetPoint(11,1150,2.021484375);
   graph->SetPoint(12,1200,1.704101562);
   graph->SetPoint(13,1250,1.469726562);
   graph->SetPoint(14,1300,1.303710938);
   graph->SetPoint(15,1350,1.186523438);
   graph->SetPoint(16,1400,1.069335938);
   graph->SetPoint(17,1450,0.9716796875);
   graph->SetPoint(18,1500,0.8935546875);
   graph->SetPoint(19,1550,0.8349609375);
   graph->SetPoint(20,1600,0.7861328125);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,500,1700);
   Graph_Graph2->SetMinimum(0.7075195);
   Graph_Graph2->SetMaximum(30.60107);
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
   graph->SetPoint(0,600,21.3931007);
   graph->SetPoint(1,650,17.46423919);
   graph->SetPoint(2,700,10.71696658);
   graph->SetPoint(3,750,9.535403862);
   graph->SetPoint(4,800,10.75775095);
   graph->SetPoint(5,850,12.02766309);
   graph->SetPoint(6,900,10.84148805);
   graph->SetPoint(7,950,7.964669334);
   graph->SetPoint(8,1000,4.585051599);
   graph->SetPoint(9,1050,2.359428671);
   graph->SetPoint(10,1100,1.508211515);
   graph->SetPoint(11,1150,1.306547825);
   graph->SetPoint(12,1200,1.272692496);
   graph->SetPoint(13,1250,1.223685729);
   graph->SetPoint(14,1300,1.067928772);
   graph->SetPoint(15,1350,0.8495122362);
   graph->SetPoint(16,1400,0.6545923074);
   graph->SetPoint(17,1450,0.5349122342);
   graph->SetPoint(18,1500,0.4697875674);
   graph->SetPoint(19,1550,0.43057141);
   graph->SetPoint(20,1600,0.4203805337);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","Graph",100,500,1700);
   Graph_Graph_Graph13->SetMinimum(0.3783425);
   Graph_Graph_Graph13->SetMaximum(23.49037);
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
      tex = new TLatex(0.3,0.77,"gluon-gluon");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
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
   graph->SetPoint(0,600,27.890625);
   graph->SetPoint(1,650,20.234375);
   graph->SetPoint(2,700,11.9140625);
   graph->SetPoint(3,750,8.0078125);
   graph->SetPoint(4,800,6.42578125);
   graph->SetPoint(5,850,5.52734375);
   graph->SetPoint(6,900,4.86328125);
   graph->SetPoint(7,950,4.23828125);
   graph->SetPoint(8,1000,3.583984375);
   graph->SetPoint(9,1050,2.978515625);
   graph->SetPoint(10,1100,2.451171875);
   graph->SetPoint(11,1150,2.021484375);
   graph->SetPoint(12,1200,1.704101562);
   graph->SetPoint(13,1250,1.469726562);
   graph->SetPoint(14,1300,1.303710938);
   graph->SetPoint(15,1350,1.186523438);
   graph->SetPoint(16,1400,1.069335938);
   graph->SetPoint(17,1450,0.9716796875);
   graph->SetPoint(18,1500,0.8935546875);
   graph->SetPoint(19,1550,0.8349609375);
   graph->SetPoint(20,1600,0.7861328125);
   
   TH1F *Graph_Graph_Graph24 = new TH1F("Graph_Graph_Graph24","Graph",100,500,1700);
   Graph_Graph_Graph24->SetMinimum(0.7075195);
   Graph_Graph_Graph24->SetMaximum(30.60107);
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
   graph->SetPoint(0,600,21.3931007);
   graph->SetPoint(1,650,17.46423919);
   graph->SetPoint(2,700,10.71696658);
   graph->SetPoint(3,750,9.535403862);
   graph->SetPoint(4,800,10.75775095);
   graph->SetPoint(5,850,12.02766309);
   graph->SetPoint(6,900,10.84148805);
   graph->SetPoint(7,950,7.964669334);
   graph->SetPoint(8,1000,4.585051599);
   graph->SetPoint(9,1050,2.359428671);
   graph->SetPoint(10,1100,1.508211515);
   graph->SetPoint(11,1150,1.306547825);
   graph->SetPoint(12,1200,1.272692496);
   graph->SetPoint(13,1250,1.223685729);
   graph->SetPoint(14,1300,1.067928772);
   graph->SetPoint(15,1350,0.8495122362);
   graph->SetPoint(16,1400,0.6545923074);
   graph->SetPoint(17,1450,0.5349122342);
   graph->SetPoint(18,1500,0.4697875674);
   graph->SetPoint(19,1550,0.43057141);
   graph->SetPoint(20,1600,0.4203805337);
   
   TH1F *Graph_Graph_Graph_Graph135 = new TH1F("Graph_Graph_Graph_Graph135","Graph",100,500,1700);
   Graph_Graph_Graph_Graph135->SetMinimum(0.3783425);
   Graph_Graph_Graph_Graph135->SetMaximum(23.49037);
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
