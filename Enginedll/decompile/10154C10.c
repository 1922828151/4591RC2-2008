/*
 * func-name: ?Render@CFormatedStatic@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x10154c10
 * callers: none
 * callees: 0x100b55d0, 0x100b6890
 */

void __thiscall CFormatedStatic::Render(CFormatedStatic *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // ebp
  int v5; // ebx
  unsigned int i; // edi
  int v7; // eax
  int v8; // eax
  struct REFontNode *Font; // eax
  unsigned int v10; // edi
  int v11; // ebp
  __int64 v12; // rax
  int v13; // eax
  int v14; // ebp
  int j; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  int v20; // eax
  int v21; // eax
  bool v22; // cf
  int v23; // eax
  const wchar_t *v24; // eax
  int v25; // eax
  int yTop; // [esp+4h] [ebp-30h]
  int yTopa; // [esp+4h] [ebp-30h]
  int v28; // [esp+8h] [ebp-2Ch]
  struct CREElement *v29; // [esp+Ch] [ebp-28h]
  float v30; // [esp+14h] [ebp-20h]
  float v31; // [esp+18h] [ebp-1Ch]
  float v32; // [esp+1Ch] [ebp-18h]
  float v33; // [esp+20h] [ebp-14h]
  struct tagRECT rc; // [esp+24h] [ebp-10h] BYREF

  if ( !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return;
  v4 = 0;
  v5 = 0;
  v29 = (struct CREElement *)**((_DWORD **)this + 30);
  v28 = 0;
  for ( i = 0; ; ++i )
  {
    v7 = *((_DWORD *)this + 175);
    if ( !v7 || i >= (*((_DWORD *)this + 176) - v7) / 36 )
      break;
    v8 = *((_DWORD *)this + 175);
    if ( !v8 || i >= (*((_DWORD *)this + 176) - v8) / 36 )
      invalid_parameter_noinfo();
    v5 += *(_DWORD *)(*((_DWORD *)this + 175) + v4 + 32);
    v4 += 36;
  }
  Font = CREDialog::GetFont(*((CREDialog **)this + 28), *((_DWORD *)v29 + 1));
  if ( Font )
    v28 = *((_DWORD *)Font + 131);
  v10 = 0;
  v11 = 0;
  yTop = 0;
  if ( ((*(int (__thiscall **)(CFormatedStatic *))(*(_DWORD *)this + 192))(this) & 2) != 0 )
  {
    v11 = *((_DWORD *)this + 43) - *((_DWORD *)this + 41) - v5;
  }
  else if ( ((*(int (__thiscall **)(CFormatedStatic *))(*(_DWORD *)this + 192))(this) & 1) != 0 )
  {
    v12 = *((_DWORD *)this + 43) - *((_DWORD *)this + 41) - v5;
    v11 = ((int)v12 - HIDWORD(v12)) >> 1;
  }
  if ( ((*(int (__thiscall **)(CFormatedStatic *))(*(_DWORD *)this + 192))(this) & 8) != 0 )
  {
    v13 = *((_DWORD *)this + 44) - *((_DWORD *)this + 42) - v28;
  }
  else
  {
    if ( ((*(int (__thiscall **)(CFormatedStatic *))(*(_DWORD *)this + 192))(this) & 4) == 0 )
      goto LABEL_21;
    v13 = (*((_DWORD *)this + 44) - *((_DWORD *)this + 42) - v28) / 2;
  }
  yTop = v13;
LABEL_21:
  v14 = *((_DWORD *)this + 41) + v11;
  yTopa = *((_DWORD *)this + 42) + yTop;
  for ( j = 0; ; j += 36 )
  {
    v16 = *((_DWORD *)this + 175);
    if ( !v16 || v10 >= (*((_DWORD *)this + 176) - v16) / 36 )
      break;
    v17 = *((_DWORD *)this + 175);
    if ( !v17 || v10 >= (*((_DWORD *)this + 176) - v17) / 36 )
      invalid_parameter_noinfo();
    SetRect(&rc, v14, yTopa, v14 + *(_DWORD *)(j + *((_DWORD *)this + 175) + 32), yTopa + v28);
    v18 = *((_DWORD *)this + 175);
    if ( !v18 || v10 >= (*((_DWORD *)this + 176) - v18) / 36 )
      invalid_parameter_noinfo();
    v19 = *(_DWORD *)(j + *((_DWORD *)this + 175));
    v30 = (double)BYTE2(v19) * 0.003921568859368563;
    v31 = (double)BYTE1(v19) * 0.003921568859368563;
    *((float *)v29 + 45) = v30;
    *((float *)v29 + 46) = v31;
    v32 = (double)(unsigned __int8)v19 * 0.003921568859368563;
    *((float *)v29 + 47) = v32;
    v33 = 0.003921568859368563 * (double)HIBYTE(v19);
    *((float *)v29 + 48) = v33;
    v20 = *((_DWORD *)this + 175);
    if ( !v20 || v10 >= (*((_DWORD *)this + 176) - v20) / 36 )
      invalid_parameter_noinfo();
    v21 = *((_DWORD *)this + 175);
    v22 = *(_DWORD *)(j + v21 + 28) < 8u;
    v23 = j + v21 + 4;
    if ( v22 )
      v24 = (const wchar_t *)(v23 + 4);
    else
      v24 = *(const wchar_t **)(v23 + 4);
    CREDialog::DrawTextW(*((CREDialog **)this + 28), v24, v29, &rc, 0, -1);
    v25 = *((_DWORD *)this + 175);
    if ( !v25 || v10 >= (*((_DWORD *)this + 176) - v25) / 36 )
      invalid_parameter_noinfo();
    v14 += *(_DWORD *)(j + *((_DWORD *)this + 175) + 32);
    ++v10;
  }
}
