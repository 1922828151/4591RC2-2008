/*
 * func-name: ?BringToTop@GUISystem@@UAEXPAVCGUIWindow@@@Z
 * func-address: 0x100d75b0
 * callers: none
 * callees: 0x1000d9a0, 0x100a9cd0, 0x100cff80, 0x100d9ad0, 0x10149e30, 0x1014a3e0, 0x101a2500
 */

void __thiscall GUISystem::BringToTop(GUISystem *this, CREDialog **a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v4; // eax
  CREDialog **v5; // ebx
  struct CREControl *v6; // eax
  struct CREControl *v7; // eax
  unsigned int v8; // edi
  _DWORD *v9; // esi
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ebp
  unsigned int v13; // edi
  void (__cdecl *v14)(); // ebp
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edx
  CREDialog ***v18; // eax
  void *v19; // edi
  _DWORD *v20; // ecx
  int v21; // eax
  unsigned int v22; // esi
  CDlgMgr *v23; // eax
  int v24; // [esp-10h] [ebp-38h]
  int v25; // [esp-10h] [ebp-38h]
  int v26; // [esp+4h] [ebp-24h] BYREF
  int v27; // [esp+Ch] [ebp-1Ch] BYREF
  void *v28; // [esp+10h] [ebp-18h]
  int v29; // [esp+14h] [ebp-14h]
  int v30; // [esp+18h] [ebp-10h]
  struct _EXCEPTION_REGISTRATION_RECORD *v31; // [esp+1Ch] [ebp-Ch]
  void *v32; // [esp+20h] [ebp-8h]
  int v33; // [esp+24h] [ebp-4h]

  v33 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v32 = &loc_101ADE75;
  v31 = ExceptionList;
  v4 = (*(int (__thiscall **)(GUISystem *, int))(*(_DWORD *)this + 68))(this, 1);
  v5 = a2;
  if ( v4 && !CREDialog::IsDlgFrontOfMe(a2[1], *(_DWORD *)(*(_DWORD *)(v4 + 4) + 88)) )
  {
    v6 = CREDialog::s_pControlFocus;
    if ( CREDialog::s_pControlFocus
      && *(_DWORD *)(*((_DWORD *)CREDialog::s_pControlFocus + 28) + 88) != *((_DWORD *)v5[1] + 22) )
    {
      *((_BYTE *)CREDialog::s_pControlFocus + 91) = 0;
      *((_BYTE *)v6 + 92) = 0;
    }
    v7 = CREDialog::s_pControlPressed;
    if ( CREDialog::s_pControlPressed
      && *(_DWORD *)(*((_DWORD *)CREDialog::s_pControlPressed + 28) + 88) != *((_DWORD *)v5[1] + 22) )
    {
      *((_BYTE *)CREDialog::s_pControlPressed + 91) = 0;
      *((_BYTE *)v7 + 92) = 0;
    }
  }
  v8 = 0;
  v9 = (_DWORD *)((char *)this + 16);
  while ( 1 )
  {
    v10 = v9[1];
    if ( !v10 || v8 >= (v9[2] - v10) >> 2 )
    {
      v14 = invalid_parameter_noinfo;
      goto LABEL_24;
    }
    v11 = v9[1];
    if ( *(CREDialog ***)(v11 + 4 * v8) == v5 )
      break;
    ++v8;
  }
  v12 = v9[1];
  if ( v11 > v9[2] )
    invalid_parameter_noinfo();
  v13 = v12 + 4 * v8;
  if ( v13 <= v9[2] && v13 >= v9[1] )
  {
    v14 = invalid_parameter_noinfo;
  }
  else
  {
    v14 = invalid_parameter_noinfo;
    invalid_parameter_noinfo();
  }
  v15 = (int)(v9[2] - (v13 + 4)) >> 2;
  if ( v15 > 0 )
    memmove_s((void *const)v13, 4 * v15, (const void *const)(v13 + 4), 4 * v15);
  v9[2] -= 4;
LABEL_24:
  CREDialog::FocusDefaultControl(v5[1]);
  v16 = v9[1];
  if ( v16 )
    v17 = (int)(v9[2] - v16) >> 2;
  else
    v17 = 0;
  if ( v16 && v17 < (int)(v9[3] - v16) >> 2 )
  {
    v18 = (CREDialog ***)v9[2];
    *v18 = v5;
    v9[2] = v18 + 1;
  }
  else
  {
    v19 = (void *)v9[2];
    if ( v16 > (unsigned int)v19 )
      v14();
    sub_100D9AD0((int)&v26, (int)v9, v19, (int)&a2);
  }
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v24 = (int)v5[1] + 3736;
  v33 = 0;
  sub_1000D9A0((int)&v27, v24);
  v20 = v28;
  if ( v28 )
  {
    v21 = v29;
    if ( (v29 - (int)v28) >> 2 )
    {
      v22 = 0;
      while ( v20 )
      {
        if ( v22 >= (v21 - (int)v20) >> 2 )
          goto LABEL_39;
        v25 = v20[v22];
        v23 = CDlgMgr::Instance();
        CDlgMgr::BringToTop(v23, v25);
        v21 = v29;
        v20 = v28;
        ++v22;
      }
    }
    else
    {
LABEL_39:
      operator delete(v20);
    }
  }
}
