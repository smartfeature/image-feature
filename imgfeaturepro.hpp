#pragma once
/**
Smart Feature @2017-2019
**/
namespace ImgPro {


	class ImgData {

	public:
		double** m_img;
		int		 m_r;
		int		 m_c;
		int		 m_wRoI;
		int		 m_rRoi;
		int		 m_cRoi;
	};

	class GeneralParams {

	public:
		int* m_iparam;
		int  m_ilen;
		double* m_dparam;
		int m_dlen;
	};

}

typedef void(*DllImgProFun)(
	ImgPro::ImgData** pdata,
	ImgPro::GeneralParams** pParams,
	ImgPro::ImgData** poutdata,
	int imessage);
