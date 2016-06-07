{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  4 09:45:27 2015) by ROOT version5.34/31
   TCanvas *c = new TCanvas("c", "c",0,45,500,400);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-2.556886,-2.974684,13.01198,13.48101);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.065);
   c->SetBottomMargin(0.12);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TH1D *empty = new TH1D("empty","empty",1,-1,12);
   empty->SetMinimum(-1);
   empty->SetMaximum(12);
   empty->SetLineColor(0);
   empty->GetXaxis()->SetTitle("Injected signal strength #mu");
   empty->GetXaxis()->SetLabelFont(42);
   empty->GetXaxis()->SetLabelSize(0.05);
   empty->GetXaxis()->SetTitleSize(0.045);
   empty->GetXaxis()->SetTitleFont(42);
   empty->GetYaxis()->SetTitle("Fit signal strength #hat{#mu}");
   empty->GetYaxis()->SetLabelFont(42);
   empty->GetYaxis()->SetLabelSize(0.05);
   empty->GetYaxis()->SetTitleSize(0.045);
   empty->GetYaxis()->SetTitleFont(42);
   empty->GetZaxis()->SetLabelFont(42);
   empty->GetZaxis()->SetLabelSize(0.05);
   empty->GetZaxis()->SetTitleSize(0.05);
   empty->GetZaxis()->SetTitleFont(42);
   empty->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0,-0.1194335);
   gre->SetPointError(0,0,0.3916525);
   gre->SetPoint(1,0.5,0.476453);
   gre->SetPointError(1,0,0.3430424);
   gre->SetPoint(2,1,0.965205);
   gre->SetPointError(2,0,0.4092755);
   gre->SetPoint(3,2,1.977477);
   gre->SetPointError(3,0,0.5470304);
   gre->SetPoint(4,5,4.953156);
   gre->SetPointError(4,0,0.7955901);
   gre->SetPoint(5,10,9.96131);
   gre->SetPointError(5,0,1.024487);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,11);
   Graph_Graph1->SetMinimum(-1.660774);
   Graph_Graph1->SetMaximum(12.13548);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("p");
   TLatex *   tex = new TLatex(0.1,0.95,"CMS simulation");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.65,0.95,"4.0 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.85,"razor MultiJet");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(52);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.78,"pp#rightarrow#tilde{g}#tilde{g}, #tilde{g}#rightarrowb#bar{b}#tilde{#chi}^{0}_{1}");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.7,"m_{#tilde{g}} = 1500 GeV, m_{#tilde{#chi}} = 100 GeV ");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TGraph *graph = new TGraph(2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,-1,-1);
   graph->SetPoint(1,12,12);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-2.3,13.3);
   Graph_Graph1->SetMinimum(-2.3);
   Graph_Graph1->SetMaximum(13.3);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("l");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
