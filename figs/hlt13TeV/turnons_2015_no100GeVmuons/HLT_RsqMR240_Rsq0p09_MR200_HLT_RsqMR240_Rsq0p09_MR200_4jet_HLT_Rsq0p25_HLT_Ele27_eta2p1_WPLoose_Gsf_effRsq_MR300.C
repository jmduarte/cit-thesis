{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 22:30:38 2016) by ROOT version5.34/31
   TCanvas *c = new TCanvas("c", "c",1,1,500,376);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-0.1466667,-0.1625,1.32,1.4625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis11[11] = {0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 1}; 
   
   TEfficiency * effRsq_MR30011 = new TEfficiency("effRsq_MR300","Rsq efficiency",10,xAxis11);
   
   effRsq_MR30011->SetConfidenceLevel(0.6826895);
   effRsq_MR30011->SetBetaAlpha(1);
   effRsq_MR30011->SetBetaBeta(1);
   effRsq_MR30011->SetWeight(1);
   effRsq_MR30011->SetStatisticOption(0);
   effRsq_MR30011->SetPosteriorMode(0);
   effRsq_MR30011->SetShortestInterval(0);
   effRsq_MR30011->SetTotalEvents(0,0);
   effRsq_MR30011->SetPassedEvents(0,0);
   effRsq_MR30011->SetTotalEvents(1,179396);
   effRsq_MR30011->SetPassedEvents(1,1714);
   effRsq_MR30011->SetTotalEvents(2,8933);
   effRsq_MR30011->SetPassedEvents(2,2797);
   effRsq_MR30011->SetTotalEvents(3,4546);
   effRsq_MR30011->SetPassedEvents(3,2684);
   effRsq_MR30011->SetTotalEvents(4,2628);
   effRsq_MR30011->SetPassedEvents(4,1898);
   effRsq_MR30011->SetTotalEvents(5,1586);
   effRsq_MR30011->SetPassedEvents(5,1237);
   effRsq_MR30011->SetTotalEvents(6,1095);
   effRsq_MR30011->SetPassedEvents(6,857);
   effRsq_MR30011->SetTotalEvents(7,755);
   effRsq_MR30011->SetPassedEvents(7,561);
   effRsq_MR30011->SetTotalEvents(8,528);
   effRsq_MR30011->SetPassedEvents(8,388);
   effRsq_MR30011->SetTotalEvents(9,418);
   effRsq_MR30011->SetPassedEvents(9,296);
   effRsq_MR30011->SetTotalEvents(10,1052);
   effRsq_MR30011->SetPassedEvents(10,569);
   effRsq_MR30011->SetTotalEvents(11,10);
   effRsq_MR30011->SetPassedEvents(11,9);
   
   TF1 *sigmoidRsq = new TF1("sigmoidRsq","[0]/(1.0+exp(-(x-[1])/[2]))",0,1.5);
   sigmoidRsq->SetFillColor(19);
   sigmoidRsq->SetFillStyle(0);
   sigmoidRsq->SetLineColor(2);
   sigmoidRsq->SetLineWidth(2);
   sigmoidRsq->SetChisquare(331.5472);
   sigmoidRsq->SetNDF(7);
   sigmoidRsq->GetXaxis()->SetLabelFont(42);
   sigmoidRsq->GetXaxis()->SetLabelSize(0.035);
   sigmoidRsq->GetXaxis()->SetTitleSize(0.035);
   sigmoidRsq->GetXaxis()->SetTitleFont(42);
   sigmoidRsq->GetYaxis()->SetLabelFont(42);
   sigmoidRsq->GetYaxis()->SetLabelSize(0.035);
   sigmoidRsq->GetYaxis()->SetTitleSize(0.035);
   sigmoidRsq->GetYaxis()->SetTitleFont(42);
   sigmoidRsq->SetParameter(0,0.6926779);
   sigmoidRsq->SetParError(0,0.004664757);
   sigmoidRsq->SetParLimits(0,0,1);
   sigmoidRsq->SetParameter(1,0.1297189);
   sigmoidRsq->SetParError(1,0.0006212847);
   sigmoidRsq->SetParLimits(1,0,0);
   sigmoidRsq->SetParameter(2,0.01348581);
   sigmoidRsq->SetParError(2,0.0002127115);
   sigmoidRsq->SetParLimits(2,0,0);
   effRsq_MR30011->GetListOfFunctions()->Add(sigmoidRsq);
   effRsq_MR30011->SetFillColor(19);
   effRsq_MR30011->SetMarkerStyle(20);
   effRsq_MR30011->SetMarkerSize(0.8);
   effRsq_MR30011->Draw("apez");
   TLatex *   tex = new TLatex(0.12,0.92,"CMS preliminary");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.6,0.92,"13 TeV (2300 pb^{-1})");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.7,0.75,"M_{R} > 300");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.85,"signal:       HLT_RsqMR240_Rsq0p09_MR200 || HLT_RsqMR240_Rsq0p09_MR200_4jet || HLT_Rsq0p25");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.82,"reference:  HLT_Ele27_eta2p1_WPLoose_Gsf");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
