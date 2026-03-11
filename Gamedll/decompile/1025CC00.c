/*
 * func-name: sub_1025CC00
 * func-address: 0x1025cc00
 * callers: 0x1000d35a
 * callees: 0x1000af92, 0x102c9ea8
 */

void __userpurge sub_1025CC00(int a1@<ecx>, int a2@<esi>, float a3)
{
  Input *v4; // eax
  CDlgMgr *v5; // eax
  CDlgMgr *v6; // eax
  struct CTYDialog *Dialog; // eax
  int v8; // esi
  int v10; // [esp+20h] [ebp-Ch]

  if ( *(_BYTE *)(a1 + 3920) )
  {
    v4 = (Input *)Input::Instance(*(_DWORD *)(a1 + 3924));
    if ( !Input::ControlDown(v4) )
    {
      v5 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::ShowDialog(v5);
      v6 = (CDlgMgr *)CDlgMgr::Instance();
      Dialog = CDlgMgr::GetDialog(v6);
      v8 = _RTDynamicCast(Dialog, 14, 0, 0);
      *(float *)(Input::Instance(a2) + 1716) = *(float *)(v8 + 3912);
      *(float *)(Input::Instance(v10) + 1712) = *(float *)(v8 + 3908);
      *(_BYTE *)(v8 + 3920) = 0;
      *(_DWORD *)(v8 + 3924) = -1;
    }
  }
  CTYDialog::CenterDialog((CTYDialog *)a1, 1, 1);
  sub_1000AF92();
  CTYDialog::Tick((CTYDialog *)a1, a3);
}
