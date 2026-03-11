/*
 * func-name: ?AddUIEventHandler@CDlgMgr@@QAE_NHP6GXPAVCREDialog@@IHPAVCREControl@@IJ@Z@Z
 * func-address: 0x10149f20
 * callers: none
 * callees: 0x10149bc0
 */

char __thiscall CDlgMgr::AddUIEventHandler(
        CDlgMgr *this,
        int a2,
        void (__stdcall *a3)(struct CREDialog *, unsigned int, int, struct CREControl *, unsigned int, int))
{
  struct CTYDialog *Dialog; // eax

  Dialog = CDlgMgr::GetDialog(this, a2);
  if ( !Dialog )
    return 0;
  *((_DWORD *)Dialog + 184) = a3;
  return 1;
}
