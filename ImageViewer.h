#pragma once

#include "ScrollHelper.h"



class CImageViewer : public CWnd
{
	DECLARE_DYNAMIC(CImageViewer)

public:
	CImageViewer();
	virtual ~CImageViewer();

	CBitmap *m_pBitmap;
	CScrollHelper m_scrollHelper;

	void UpdateBitmapSize();

	BOOL Create(CWnd* pParent);

protected:
	DECLARE_MESSAGE_MAP()

	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnPaint();
};

