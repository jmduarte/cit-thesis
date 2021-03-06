{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 23 12:53:07 2015) by ROOT version5.34/31
   TCanvas *c = new TCanvas("c", "c",1,1,500,376);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(2.499759,-0.7576902,3.827832,0.2798448);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogx();
   c->SetLogy();
   c->SetLeftMargin(0.15);
   c->SetRightMargin(0.17);
   c->SetBottomMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1217[8] = {500, 600, 700, 900, 1200, 1600, 2500, 4000}; 
   Double_t yAxis3[6] = {0.25, 0.3, 0.41, 0.52, 0.64, 1.5}; 
   
   TH2D *h_RsqMR_nsigma = new TH2D("h_RsqMR_nsigma","h_data_nBtagRsqMR yx projection",7, xAxis1217,5, yAxis3);
   h_RsqMR_nsigma->SetMinimum(-5.1);
   h_RsqMR_nsigma->SetMaximum(5.1);
   h_RsqMR_nsigma->SetStats(0);
   h_RsqMR_nsigma->SetContour(999);
   
   TPaletteAxis *palette = new TPaletteAxis(3.6087,-0.60206,3.668464,0.1760913,h_RsqMR_nsigma);
palette->SetLabelColor(1);
palette->SetLabelFont(42);
palette->SetLabelOffset(0.005);
palette->SetLabelSize(0.056);
palette->SetTitleOffset(1);
palette->SetTitleSize(0.056);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   palette->SetFillColor(ci);
   palette->SetFillStyle(1001);
   h_RsqMR_nsigma->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#000099");
   h_RsqMR_nsigma->SetLineColor(ci);
   h_RsqMR_nsigma->SetMarkerSize(1.5);
   h_RsqMR_nsigma->GetXaxis()->SetTitle("M_{R} [GeV]");
   h_RsqMR_nsigma->GetXaxis()->SetMoreLogLabels();
   h_RsqMR_nsigma->GetXaxis()->SetNoExponent();
   h_RsqMR_nsigma->GetXaxis()->SetLabelFont(42);
   h_RsqMR_nsigma->GetXaxis()->SetLabelSize(0.056);
   h_RsqMR_nsigma->GetXaxis()->SetTitleSize(0.056);
   h_RsqMR_nsigma->GetXaxis()->SetTitleFont(42);
   h_RsqMR_nsigma->GetYaxis()->SetTitle("R^{2}");
   h_RsqMR_nsigma->GetYaxis()->SetMoreLogLabels();
   h_RsqMR_nsigma->GetYaxis()->SetNoExponent();
   h_RsqMR_nsigma->GetYaxis()->SetLabelFont(42);
   h_RsqMR_nsigma->GetYaxis()->SetLabelSize(0.056);
   h_RsqMR_nsigma->GetYaxis()->SetTitleSize(0.056);
   h_RsqMR_nsigma->GetYaxis()->SetTitleFont(42);
   h_RsqMR_nsigma->GetZaxis()->SetTitle("Stat.+Sys. n#sigma");
   h_RsqMR_nsigma->GetZaxis()->SetLabelFont(42);
   h_RsqMR_nsigma->GetZaxis()->SetLabelSize(0.056);
   h_RsqMR_nsigma->GetZaxis()->SetTitleSize(0.056);
   h_RsqMR_nsigma->GetZaxis()->SetTitleFont(42);
   h_RsqMR_nsigma->Draw("");
   TLine *line = new TLine(500,0.3,4000,0.3);


   
   graph = new TGraph(5);
   graph->SetName("LowRsq");
   graph->SetTitle("LowRsq");
   graph->SetFillColor(kGreen-10);
   graph->SetPoint(0,500,0.25);
   graph->SetPoint(1,4000,0.25);
   graph->SetPoint(2,4000,0.3);
   graph->SetPoint(3,500,0.3);
   graph->SetPoint(4,500,0.25);
   graph->Draw("f");

   graph = new TGraph(5);
   graph->SetName("LowMR");
   graph->SetTitle("LowMR");
   graph->SetFillColor(kGreen-10); 
   graph->SetPoint(0,500,0.3);
   graph->SetPoint(1,600,0.3);
   graph->SetPoint(2,600,1.5);
   graph->SetPoint(3,500,1.5);
   graph->SetPoint(4,500,0.3);
   graph->Draw("f");
   
   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(500,0.41,4000,0.41);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(500,0.52,4000,0.52);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(500,0.64,4000,0.64);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(600,0.3,4000,0.3);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(600,0.25,600,1.5);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(700,0.25,700,1.5);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(900,0.25,900,1.5);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1200,0.25,1200,1.5);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1600,0.25,1600,1.5);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2500,0.25,2500,1.5);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(600,0.3,600,1.5);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   TLatex *   tex = new TLatex(540,0.265,"0");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(540,0.333,"1");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(540,0.443,"2");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(540,0.556,"3");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(540,0.898,"4");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(630,0.265,"5");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(630,0.333,"6");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(630,0.443,"7");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(630,0.556,"8");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(630,0.898,"9");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(760,0.265,"10");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(760,0.333,"11");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(760,0.443,"12");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(760,0.556,"13");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(760,0.898,"14");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(980,0.265,"15");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(980,0.333,"16");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(980,0.443,"17");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(980,0.556,"18");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(980,0.898,"19");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1320,0.265,"20");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1320,0.333,"21");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1320,0.443,"22");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1320,0.556,"23");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1320,0.898,"24");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1900,0.265,"25");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1900,0.333,"26");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1900,0.443,"27");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1900,0.556,"28");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1900,0.898,"29");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(3000,0.265,"30");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(3000,0.333,"31");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(3000,0.443,"32");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(3000,0.556,"33");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(3000,0.898,"34");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.91,"CMS");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   //tex->Draw();
      tex = new TLatex(0.65,0.91,"2093 pb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   //tex->Draw();
      tex = new TLatex(0.2,0.85,"razor MultiJet bin numbers");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   //tex->Draw();
      tex = new TLatex(0.3,0.8,"Full Projection");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   //tex->Draw();
   

   TLegend *leg = new TLegend(0.25,0.78,0.8,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(0);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("LowMR","Low M_{R} and low R^{2} sideband (0-lep.)","F");

   ci = TColor::GetColor("#ccccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   c->Modified();
   c->cd();
   c->SetSelected(c);
   c->Print("h_RsqMR_unrolled_log_MultiJet.pdf");
     }
