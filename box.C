box(){
	double x[] = {1,2,3,4};
	double y[] = {1,2,3,4};
	double x_err[] ={0.5,0.5,0.5,0.5};
	double y_err[] ={0.5,0.5,0.5,0.5};

	TGraphErrors *h1 = new TGraphErrors(4,x,y);
	h1->GetXaxis()->SetLimits(-1,6);
	h1->GetYaxis()->SetRangeUser(-1,6);
	h1->Draw("ape");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			TBox *b = new TBox(x[i]-x_err[i],y[i]-y_err[i],x[i]+x_err[i],y[i]+y_err[i]);
			b->SetLineStyle(2);
			b->SetLineWidth(1.2);
			b->SetFillStyle(0);
			b->SetLineColor(kRed);
			b->Draw("samel");
		}
	}
}
