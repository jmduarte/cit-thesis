{
//=========Macro generated from canvas: c/c
//=========  (Mon Aug  8 15:25:47 2016) by ROOT version5.34/31
   TCanvas *c = new TCanvas("c", "c",2240,45,500,364);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c_pad1
   TPad *c_pad1 = new TPad("c_pad1", "pad1",0,0.5,1,1);
   c_pad1->Draw();
   c_pad1->cd();
   c_pad1->Range(181.25,-0.5,868.75,5.75);
   c_pad1->SetFillColor(0);
   c_pad1->SetBorderMode(0);
   c_pad1->SetBorderSize(2);
   c_pad1->SetGridy();
   c_pad1->SetTopMargin(0.2);
   c_pad1->SetBottomMargin(0);
   c_pad1->SetFrameBorderMode(0);
   c_pad1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraph *graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,250,0);
   graph->SetPoint(1,300,0);
   graph->SetPoint(2,350,0.05151384682);
   graph->SetPoint(3,400,0.4787844552);
   graph->SetPoint(4,450,0.9810452266);
   graph->SetPoint(5,500,1.374265467);
   graph->SetPoint(6,550,1.59670113);
   graph->SetPoint(7,700,1.491159971);
   graph->SetPoint(8,800,1.153599736);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,195,855);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.756371);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
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
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Maximum Z(#sigma)");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.1);
   multigraph->GetYaxis()->SetTitleOffset(0.4);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   graph = new TGraph(9);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,250,0);
   graph->SetPoint(1,300,0);
   graph->SetPoint(2,350,0.05151384682);
   graph->SetPoint(3,400,0.4787844552);
   graph->SetPoint(4,450,0.9810452266);
   graph->SetPoint(5,500,1.374265467);
   graph->SetPoint(6,550,1.59670113);
   graph->SetPoint(7,700,1.491159971);
   graph->SetPoint(8,800,1.153599736);
   
   TH1F *Graph_Graph_Graph12 = new TH1F("Graph_Graph_Graph12","Graph",100,195,855);
   Graph_Graph_Graph12->SetMinimum(0);
   Graph_Graph_Graph12->SetMaximum(1.756371);
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
   
   TPaveText *pt = new TPaveText(0.15,0.6,0.45,0.795,"NBNDC");
   pt->SetFillColor(0);
   pt->Draw();
   TLatex *   tex = new TLatex(0.15,0.7,"Pythia+Delphes (8 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.09);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.6,"razor Total");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.09);
   tex->SetLineWidth(2);
   tex->Draw();
   
   pt = new TPaveText(0.51,0.35,0.895,0.795,"NBNDC");
   pt->SetFillColor(0);
   pt->Draw();
      tex = new TLatex(0.52,0.7,"pp #rightarrow #tilde{b}_{1}#tilde{b}_{2}, #tilde{b}_{2}#rightarrowb#tilde{#chi}^{0}_{2},  #tilde{#chi}_{2}^{0}#rightarrowH#tilde{#chi}^{0}_{1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.09);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.52,0.56,"#tilde{b}_{1}#rightarrowb#tilde{#chi}^{0}_{1}, m_{#tilde{b}_{1}} = 130 GeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.09);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.52,0.42,"m_{#tilde{#chi}^{0}_{2}} = 230 GeV, m_{#tilde{#chi}^{0}_{1}} = 100 GeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.09);
   tex->SetLineWidth(2);
   tex->Draw();
   c_pad1->Modified();
   c->cd();
  
// ------------>Primitives in pad: c_pad2
   c_pad2 = new TPad("c_pad2", "pad2",0,0,1,0.5);
   c_pad2->Draw();
   c_pad2->cd();
   c_pad2->Range(181.25,-3.827175,868.75,1.30103);
   c_pad2->SetFillColor(0);
   c_pad2->SetBorderMode(0);
   c_pad2->SetBorderSize(2);
   c_pad2->SetLogy();
   c_pad2->SetTopMargin(0);
   c_pad2->SetBottomMargin(0.22);
   c_pad2->SetFrameBorderMode(0);
   c_pad2->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,250,0);
   graph->SetPoint(1,300,0);
   graph->SetPoint(2,350,0.1);
   graph->SetPoint(3,400,0.3);
   graph->SetPoint(4,450,0.5);
   graph->SetPoint(5,500,0.7);
   graph->SetPoint(6,550,0.7);
   graph->SetPoint(7,700,0.5);
   graph->SetPoint(8,800,0.3);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,195,855);
   Graph_Graph3->SetMinimum(0.00077);
   Graph_Graph3->SetMaximum(0.77);
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
   
   multigraph->Add(graph,"");
   multigraph->Draw("a3");
   multigraph->GetXaxis()->SetTitle("m_{#tilde{b}_{2}} [GeV]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.1);
   multigraph->GetXaxis()->SetTitleOffset(0.9);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Mode #sigma [pb]");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.1);
   multigraph->GetYaxis()->SetTitleOffset(0.4);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   graph = new TGraph(9);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetPoint(0,250,0);
   graph->SetPoint(1,300,0);
   graph->SetPoint(2,350,0.1);
   graph->SetPoint(3,400,0.3);
   graph->SetPoint(4,450,0.5);
   graph->SetPoint(5,500,0.7);
   graph->SetPoint(6,550,0.7);
   graph->SetPoint(7,700,0.5);
   graph->SetPoint(8,800,0.3);
   
   TH1F *Graph_Graph_Graph34 = new TH1F("Graph_Graph_Graph34","Graph",100,195,855);
   Graph_Graph_Graph34->SetMinimum(0.00077);
   Graph_Graph_Graph34->SetMaximum(0.77);
   Graph_Graph_Graph34->SetDirectory(0);
   Graph_Graph_Graph34->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph34->SetLineColor(ci);
   Graph_Graph_Graph34->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph34->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph34->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph34->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph34->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph34->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph34->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph34->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph34->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph34->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph34->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph34->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph34);
   
   graph->Draw("l ");
   c_pad2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
