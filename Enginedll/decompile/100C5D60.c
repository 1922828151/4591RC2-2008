/*
 * func-name: ?countPages@CMultiLineEB@@IAEXXZ
 * func-address: 0x100c5d60
 * callers: none
 * callees: 0x10059c90, 0x1005b1f0, 0x1006ab80, 0x100a1d10, 0x100a3c30, 0x100a5480
 */

void __thiscall CMultiLineEB::countPages(CMultiLineEB *this)
{
  char *v2; // ebx
  _DWORD *v3; // edi
  char *v4; // ebp
  char *v5; // edi
  char *v6; // ebp
  int v7; // eax
  bool v8; // cc
  bool v9; // zf
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // edx
  int *v19; // eax
  char *v20; // edi
  CREScrollBar *v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // esi
  int v25; // [esp+Ch] [ebp-1Ch] BYREF
  int v26; // [esp+10h] [ebp-18h] BYREF
  int v27; // [esp+18h] [ebp-10h] BYREF
  int v28; // [esp+1Ch] [ebp-Ch] BYREF
  int v29[2]; // [esp+20h] [ebp-8h] BYREF

  v2 = (char *)*((_DWORD *)this + 217);
  v3 = (_DWORD *)((char *)this + 860);
  if ( *((_DWORD *)this + 216) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v4 = (char *)v3[1];
  if ( (unsigned int)v4 > v3[2] )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase(v3, v29, (int)v3, v4, (int)v3, v2);
  v5 = (char *)*((_DWORD *)this + 221);
  if ( *((_DWORD *)this + 220) > (unsigned int)v5 )
    invalid_parameter_noinfo();
  v6 = (char *)*((_DWORD *)this + 220);
  if ( (unsigned int)v6 > *((_DWORD *)this + 221) )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase((_DWORD *)this + 219, v29, (int)this + 876, v6, (int)this + 876, v5);
  v29[0] = *((_DWORD *)this + 143) - *((_DWORD *)this + 141);
  v7 = 0;
  v8 = *((_DWORD *)this + 135) <= 0;
  *((_DWORD *)this + 213) = 0;
  v26 = 0;
  v25 = 0;
  if ( !v8 )
  {
    while ( 1 )
    {
      v9 = *((_DWORD *)this + 135) == 0;
      v28 = 0;
      if ( !v9
        && (!*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CMultiLineEB *)((char *)this + 532)) >= 0) )
      {
        CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v25, 0, &v28);
      }
      v10 = 0;
      v9 = *((_DWORD *)this + 135) == 0;
      v27 = 0;
      if ( !v9 )
      {
        if ( !*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CMultiLineEB *)((char *)this + 532)) >= 0 )
          CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v25, 1, &v27);
        v10 = v27;
      }
      v11 = v10 - v28;
      v12 = v26;
      if ( !v26 )
        break;
      v13 = *((_DWORD *)this + 133);
      v14 = v25;
      *((_BYTE *)this + 548) = 1;
      if ( *(_WORD *)(v13 + 2 * v14) )
      {
        v15 = v11 + v12;
        if ( v15 > v29[0] )
        {
          sub_1005B1F0((_DWORD *)this + 215, &v25);
          ++*((_DWORD *)this + 213);
          goto LABEL_26;
        }
        v26 = v15;
      }
      else
      {
        sub_1005B1F0((_DWORD *)this + 219, &v25);
        ++*((_DWORD *)this + 213);
        v26 = 0;
      }
LABEL_27:
      v7 = v25 + 1;
      v8 = ++v25 < *((_DWORD *)this + 135);
      if ( !v8 )
        goto LABEL_28;
    }
    sub_1005B1F0((_DWORD *)this + 215, &v25);
LABEL_26:
    v26 = v11;
    goto LABEL_27;
  }
LABEL_28:
  v16 = v7 - 1;
  v17 = *((_DWORD *)this + 220);
  v29[0] = v16;
  if ( v17 )
    v18 = (int)(*((_DWORD *)this + 221) - v17) >> 2;
  else
    v18 = 0;
  if ( v17 && v18 < (int)(*((_DWORD *)this + 222) - v17) >> 2 )
  {
    v19 = (int *)*((_DWORD *)this + 221);
    *v19 = v16;
    *((_DWORD *)this + 221) = v19 + 1;
  }
  else
  {
    v20 = (char *)*((_DWORD *)this + 221);
    if ( v17 > (unsigned int)v20 )
      invalid_parameter_noinfo();
    sub_10059C90((_DWORD *)this + 219, &v26, (_DWORD *)this + 219, v20, v29);
  }
  ++*((_DWORD *)this + 213);
  v21 = (CREScrollBar *)*((_DWORD *)this + 198);
  v22 = *((_DWORD *)this + 213);
  v23 = *((_DWORD *)v21 + 150);
  *((_DWORD *)v21 + 152) = 0;
  *((_DWORD *)v21 + 153) = v22;
  if ( v23 < 0 || (v24 = *((_DWORD *)v21 + 151), v22 <= v24) )
  {
    *((_DWORD *)v21 + 150) = 0;
  }
  else if ( v24 + v23 > v22 )
  {
    *((_DWORD *)v21 + 150) = v22 - v24;
    CREScrollBar::UpdateThumbRect(v21);
    return;
  }
  CREScrollBar::UpdateThumbRect(v21);
}
