/*
 * func-name: ?MoveNestedDialog@CTYDialog@@IAEXXZ
 * func-address: 0x100af0a0
 * callers: 0x1006b730, 0x100af0a0, 0x100b29f0, 0x100b2a80, 0x100b2b30, 0x100b2be0, 0x100c2130, 0x10149fd0, 0x1014cc50, 0x1014cfa0, 0x10150d40
 * callees: 0x100af0a0, 0x10149bc0, 0x1014a3e0
 */

void __thiscall CTYDialog::MoveNestedDialog(CTYDialog *this)
{
  unsigned int v1; // ebx
  int i; // edi
  int v4; // eax
  int v5; // eax
  CDlgMgr *v6; // eax
  struct CTYDialog *Dialog; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  int v13; // [esp-4h] [ebp-20h]
  unsigned int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  v1 = 0;
  for ( i = 0; ; i += 12 )
  {
    v4 = *((_DWORD *)this + 939);
    v15 = i;
    v14 = v1;
    if ( !v4 || v1 >= (*((_DWORD *)this + 940) - v4) / 12 )
      break;
    v5 = *((_DWORD *)this + 939);
    if ( !v5 || v1 >= (*((_DWORD *)this + 940) - v5) / 12 )
      invalid_parameter_noinfo();
    v13 = *(_DWORD *)(i + *((_DWORD *)this + 939));
    v6 = CDlgMgr::Instance();
    Dialog = CDlgMgr::GetDialog(v6, v13);
    if ( Dialog )
    {
      v8 = *((_DWORD *)this + 939);
      v16 = *((_DWORD *)this + 174);
      if ( !v8 || v1 >= (*((_DWORD *)this + 940) - v8) / 12 )
        invalid_parameter_noinfo();
      v9 = *((_DWORD *)this + 939);
      v10 = i + v9;
      v11 = *((_DWORD *)this + 173);
      if ( !v9 || v14 >= (*((_DWORD *)this + 940) - v9) / 12 )
        invalid_parameter_noinfo();
      v12 = v16 - *(_DWORD *)(v10 + 8);
      *((_DWORD *)Dialog + 173) = v11 - *(_DWORD *)(*((_DWORD *)this + 939) + v15 + 4);
      *((_DWORD *)Dialog + 174) = v12;
      CTYDialog::MoveNestedDialog(Dialog);
      i = v15;
      v1 = v14;
    }
    ++v1;
  }
}
