/*
 * func-name: ?ChangeDlgID@CDlgMgr@@QAE_NPAVCTYDialog@@H@Z
 * func-address: 0x1014a120
 * callers: none
 * callees: 0x100cf040, 0x10149bc0, 0x1014a050, 0x1014e940
 */

char __thiscall CDlgMgr::ChangeDlgID(CDlgMgr *this, struct CTYDialog *a2, int a3)
{
  struct CTYDialog *v5; // ebp
  int v6; // edi
  CDlgMgr *v7; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h]

  if ( CDlgMgr::GetDialog(this, a3) )
    return 0;
  v5 = a2;
  a2 = (struct CTYDialog *)*((_DWORD *)a2 + 22);
  sub_1014E940(&v7, &a2);
  v6 = (int)v7;
  v10 = *((_DWORD *)this + 3);
  if ( !v7 || v7 != (CDlgMgr *)((char *)this + 8) )
    invalid_parameter_noinfo();
  if ( v8 != v10 )
    sub_100CF040((_DWORD *)this + 2, &v9, v6, v8);
  *((_DWORD *)v5 + 22) = a3;
  return CDlgMgr::AddDialog(this, v5);
}
