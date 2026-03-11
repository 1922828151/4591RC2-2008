/*
 * func-name: sub_1025C210
 * func-address: 0x1025c210
 * callers: 0x1000faf1
 * callees: 0x1000516e, 0x102c9ea8
 */

void __userpurge sub_1025C210(int a1@<edi>, int a2, int a3, int a4, int a5, int a6, int a7)
{
  struct Game *v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  CDlgMgr *v14; // eax
  struct CTYDialog *Dialog; // eax
  int v16; // esi
  int v17; // [esp-8h] [ebp-8h]
  int v18; // [esp-8h] [ebp-8h]
  float v19; // [esp+8h] [ebp+8h]
  float v20; // [esp+8h] [ebp+8h]

  if ( a3 == 24 )
  {
    v7 = Game::Instance();
    if ( a6 )
    {
      *((_BYTE *)v7 + 116) = 1;
      v8 = _RTDynamicCast(a2, 0, &CREDialog `RTTI Type Descriptor', &CCommandUI `RTTI Type Descriptor');
      v19 = *(float *)(Input::Instance(a1) + 1716);
      *(float *)(v8 + 3904) = v19;
      *(float *)(v8 + 3912) = v19;
      v9 = Input::Instance(v17);
      v10 = *(_DWORD *)(v8 + 3892);
      v11 = *(_DWORD *)(v8 + 3872);
      v20 = *(float *)(v9 + 1712);
      *(float *)(v8 + 3900) = v20;
      *(float *)(v8 + 3908) = v20;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v11 + 4 * v10) + 136))(*(_DWORD *)(v11 + 4 * v10), 1);
      v12 = *(_DWORD *)(*(_DWORD *)(v8 + 3872) + 4 * v10 + 28);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 136))(v12, 0);
      v13 = *(_DWORD *)(*(_DWORD *)(v8 + 3872) + 4 * v10 + 56);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 136))(v13, 0);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(v8 + 3872) + 24) + 136))(
        *(_DWORD *)(*(_DWORD *)(v8 + 3872) + 24),
        0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(v8 + 3872) + 52) + 136))(
        *(_DWORD *)(*(_DWORD *)(v8 + 3872) + 52),
        1);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(v8 + 3872) + 80) + 136))(
        *(_DWORD *)(*(_DWORD *)(v8 + 3872) + 80),
        0);
      *(_DWORD *)(v8 + 3892) = 6;
      *(_BYTE *)(v8 + 3920) = 1;
    }
    else
    {
      *((_BYTE *)v7 + 116) = 0;
      v14 = (CDlgMgr *)CDlgMgr::Instance();
      Dialog = CDlgMgr::GetDialog(v14);
      v16 = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CCommandUI `RTTI Type Descriptor');
      *(float *)(Input::Instance(a1) + 1716) = *(float *)(v16 + 3912);
      *(float *)(Input::Instance(v18) + 1712) = *(float *)(v16 + 3908);
      *(_BYTE *)(v16 + 3920) = 0;
    }
  }
}
