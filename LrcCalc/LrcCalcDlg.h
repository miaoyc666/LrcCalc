// LrcCalcDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CLrcCalcDlg �Ի���
class CLrcCalcDlg : public CDialog
{
// ����
public:
	CLrcCalcDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_LRCCALC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnExit();
	afx_msg void CreateMessage();
	CNiNumEdit m_nSlaveNum;
	CNiNumEdit m_nFunCode;
	CNiNumEdit m_nStartAddr;
	CNiNumEdit m_nDataSize;

};