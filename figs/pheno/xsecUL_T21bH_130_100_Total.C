{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  9 14:53:25 2016) by ROOT version5.34/31
   TCanvas *c = new TCanvas("c", "c",0,45,500,364);
   c->SetHighLightColor(2);
   c->Range(181.25,-3.039148,868.75,3.671016);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraphErrors *gre = new TGraphErrors(4);
   gre->SetName("Graph");
   gre->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#6666ff");
   gre->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   gre->SetLineColor(ci);
   gre->SetPoint(0,250,0.002628);
   gre->SetPointError(0,0,1.312e-05);
   gre->SetPoint(1,300,0.001529);
   gre->SetPointError(1,0,7.535e-06);
   gre->SetPoint(2,500,0.0002336);
   gre->SetPointError(2,0,1.113e-06);
   gre->SetPoint(3,800,2.727e-05);
   gre->SetPointError(3,0,1.282e-07);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,195,855);
   Graph_Graph1->SetMinimum(2.442762e-05);
   Graph_Graph1->SetMaximum(0.002902518);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   multigraph->Add(gre,"");
   
   TGraph *graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,250,2.25);
   graph->SetPoint(1,300,1.85);
   graph->SetPoint(2,350,1.75);
   graph->SetPoint(3,400,1.75);
   graph->SetPoint(4,450,2.05);
   graph->SetPoint(5,500,2.15);
   graph->SetPoint(6,550,2.15);
   graph->SetPoint(7,700,1.45);
   graph->SetPoint(8,800,1.075);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,195,855);
   Graph_Graph1->SetMinimum(0.9575);
   Graph_Graph1->SetMaximum(2.3675);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   multigraph->Draw("a3");
   multigraph->GetXaxis()->SetTitle("m_{#tilde{b}_{2}} [GeV]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.045);
   multigraph->GetXaxis()->SetTitleSize(0.045);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("95% CL Upper Limit Cross Section #sigma_{up} [pb]");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.045);
   multigraph->GetYaxis()->SetTitleSize(0.045);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   graph = new TGraph(9);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,250,2.25);
   graph->SetPoint(1,300,1.85);
   graph->SetPoint(2,350,1.75);
   graph->SetPoint(3,400,1.75);
   graph->SetPoint(4,450,2.05);
   graph->SetPoint(5,500,2.15);
   graph->SetPoint(6,550,2.15);
   graph->SetPoint(7,700,1.45);
   graph->SetPoint(8,800,1.075);
   
   TH1F *Graph_Graph_Graph12 = new TH1F("Graph_Graph_Graph12","Graph",100,195,855);
   Graph_Graph_Graph12->SetMinimum(0.9575);
   Graph_Graph_Graph12->SetMaximum(2.3675);
   Graph_Graph_Graph12->SetDirectory(0);
   Graph_Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph12->SetLineColor(ci);
   Graph_Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph12->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph12->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph12->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph12);
   
   graph->Draw("l ");
   
   graph = new TGraph(9);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,250,1.95);
   graph->SetPoint(1,300,1.65);
   graph->SetPoint(2,350,1.35);
   graph->SetPoint(3,400,1.15);
   graph->SetPoint(4,450,1.05);
   graph->SetPoint(5,500,0.95);
   graph->SetPoint(6,550,0.95);
   graph->SetPoint(7,700,0.75);
   graph->SetPoint(8,800,0.625);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,195,855);
   Graph_Graph3->SetMinimum(0.4925);
   Graph_Graph3->SetMaximum(2.0825);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("l ");
   
   graph = new TGraph(4);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,250,0.002628);
   graph->SetPoint(1,300,0.001529);
   graph->SetPoint(2,500,0.0002336);
   graph->SetPoint(3,800,2.727e-05);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,195,855);
   Graph_Graph4->SetMinimum(2.4543e-05);
   Graph_Graph4->SetMaximum(0.002888073);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw("l ");
   TLatex *   tex = new TLatex(0.15,0.84,"Pythia+Delphes (8 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.77,"razor Total");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.52,0.84,"pp #rightarrow #tilde{b}_{1}#tilde{b}_{2}, #tilde{b}_{2}#rightarrowb#tilde{#chi}^{0}_{2},  #tilde{#chi}_{2}^{0}#rightarrowH#tilde{#chi}^{0}_{1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.52,0.78,"m_{#tilde{b}_{1}} = 130 GeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.52,0.72,"m_{#tilde{#chi}^{0}_{2}} = 230 GeV, m_{#tilde{#chi}^{0}_{1}} = 100 GeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.5,0.53,0.85,0.68,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","observed (emulation)","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","expected (emulation)","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
