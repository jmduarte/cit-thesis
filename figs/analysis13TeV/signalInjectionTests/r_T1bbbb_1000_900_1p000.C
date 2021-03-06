{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  4 09:43:31 2015) by ROOT version5.34/31
   TCanvas *c = new TCanvas("c", "c",0,45,500,400);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-1.479042,-7.708861,3.311377,56.53165);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.065);
   c->SetBottomMargin(0.12);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TH1D *rHist = new TH1D("rHist","rHist",40,-1,3);
   rHist->SetBinContent(0,1);
   rHist->SetBinContent(3,1);
   rHist->SetBinContent(4,1);
   rHist->SetBinContent(6,2);
   rHist->SetBinContent(7,4);
   rHist->SetBinContent(8,4);
   rHist->SetBinContent(9,2);
   rHist->SetBinContent(10,6);
   rHist->SetBinContent(11,8);
   rHist->SetBinContent(12,7);
   rHist->SetBinContent(13,12);
   rHist->SetBinContent(14,15);
   rHist->SetBinContent(15,13);
   rHist->SetBinContent(16,17);
   rHist->SetBinContent(17,18);
   rHist->SetBinContent(18,26);
   rHist->SetBinContent(19,18);
   rHist->SetBinContent(20,29);
   rHist->SetBinContent(21,27);
   rHist->SetBinContent(22,16);
   rHist->SetBinContent(23,28);
   rHist->SetBinContent(24,28);
   rHist->SetBinContent(25,21);
   rHist->SetBinContent(26,17);
   rHist->SetBinContent(27,22);
   rHist->SetBinContent(28,6);
   rHist->SetBinContent(29,19);
   rHist->SetBinContent(30,6);
   rHist->SetBinContent(31,7);
   rHist->SetBinContent(32,4);
   rHist->SetBinContent(33,1);
   rHist->SetBinContent(34,3);
   rHist->SetBinContent(36,1);
   rHist->SetBinContent(38,1);
   rHist->SetBinContent(41,1);
   rHist->SetMaximum(50.75);
   rHist->SetEntries(392);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   rHist->SetLineColor(ci);
   rHist->SetLineStyle(20);
   rHist->SetMarkerStyle(20);
   rHist->GetXaxis()->SetTitle("#hat{#mu}");
   rHist->GetXaxis()->SetLabelFont(42);
   rHist->GetXaxis()->SetLabelSize(0.05);
   rHist->GetXaxis()->SetTitleSize(0.05);
   rHist->GetXaxis()->SetTitleFont(42);
   rHist->GetYaxis()->SetTitle("Toy Datasets");
   rHist->GetYaxis()->SetLabelFont(42);
   rHist->GetYaxis()->SetLabelSize(0.05);
   rHist->GetYaxis()->SetTitleSize(0.05);
   rHist->GetYaxis()->SetTitleFont(42);
   rHist->GetZaxis()->SetLabelFont(42);
   rHist->GetZaxis()->SetLabelSize(0.05);
   rHist->GetZaxis()->SetTitleSize(0.05);
   rHist->GetZaxis()->SetTitleFont(42);
   rHist->Draw("pe");
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
      tex = new TLatex(0.12,0.7,"m_{#tilde{g}} = 1000 GeV, m_{#tilde{#chi}} = 900 GeV");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.65,"#mu = 1.0");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
