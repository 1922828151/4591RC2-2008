/*
 * func-name: ?Render@CREComboBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bc680
 * callers: none
 * callees: 0x1006a3d0, 0x100a5e50, 0x100b5280, 0x100b5850, 0x100b5e40, 0x100b6890, 0x100d5bd0, 0x100d6d20
 */

void __thiscall CREComboBox::Render(CREComboBox *this, struct IDirect3DDevice9 *a2, float a3)
{
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // ebx
  int v7; // ebp
  int v8; // ecx
  unsigned int v9; // eax
  float v10; // edx
  int v11; // edi
  int v12; // ebx
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // ecx
  int v17; // edi
  struct IDirect3DDevice9Vtbl *lpVtbl; // eax
  GUISystem *v19; // eax
  int v20; // eax
  LONG v21; // ecx
  LONG v22; // edx
  bool v23; // zf
  int v24; // edi
  int v25; // edi
  int v26; // eax
  const wchar_t *v27; // eax
  int v28; // [esp+Ch] [ebp-3Ch]
  int v29; // [esp+20h] [ebp-28h]
  int v30; // [esp+24h] [ebp-24h]
  struct CREElement *v31; // [esp+28h] [ebp-20h]
  struct CREElement *v32; // [esp+2Ch] [ebp-1Ch]
  POINT pt; // [esp+30h] [ebp-18h] BYREF
  float v34; // [esp+38h] [ebp-10h]
  float v35; // [esp+3Ch] [ebp-Ch]
  float v36; // [esp+40h] [ebp-8h]
  float v37; // [esp+44h] [ebp-4h]
  struct IDirect3DDevice9 *v38; // [esp+4Ch] [ebp+4h]

  v4 = *(_DWORD **)(*((_DWORD *)this + 30) + 8);
  v32 = (struct CREElement *)v4;
  REBlendColor::Blend((REBlendColor *)(v4 + 29), 0, a3, 0.0);
  if ( !byte_11240B44 )
  {
    v5 = v4[1];
    if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v5) + 524) )
    {
      v6 = *((_DWORD *)this + 379) - *((_DWORD *)this + 377);
      v7 = v4[1];
      v28 = v6 / *(_DWORD *)(*(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v7) + 528);
      CREScrollBar::SetPageSize((CREComboBox *)((char *)this + 828), v28);
    }
    else
    {
      CREScrollBar::SetPageSize((CREComboBox *)((char *)this + 828), *((_DWORD *)this + 379) - *((_DWORD *)this + 377));
    }
    byte_11240B44 = 1;
  }
  if ( *((_BYTE *)this + 1448) )
  {
    if ( *((int *)this + 381) > 10 )
      (*(void (__stdcall **)(struct IDirect3DDevice9 *, _DWORD))(*((_DWORD *)this + 207) + 20))(a2, LODWORD(a3));
    if ( *((_BYTE *)this + 1448) )
      CREDialog::DrawRect(*((CREDialog **)this + 28), (struct tagRECT *)this + 93, 0x40A3E6EFu, *((float *)this + 132));
  }
  v8 = *(_DWORD *)(*((_DWORD *)this + 30) + 12);
  *(_DWORD *)(v8 + 100) = v4[25];
  *(_DWORD *)(v8 + 104) = v4[26];
  *(_DWORD *)(v8 + 108) = v4[27];
  v9 = *(_DWORD *)(v8 + 116);
  *(_DWORD *)(v8 + 112) = v4[28];
  v34 = (double)BYTE2(v9) * 0.003921568859368563;
  v31 = (struct CREElement *)v8;
  v35 = (double)BYTE1(v9) * 0.003921568859368563;
  v10 = v35;
  *(float *)(v8 + 180) = v34;
  *(float *)(v8 + 184) = v10;
  v36 = (double)(unsigned __int8)v9 * 0.003921568859368563;
  *(float *)(v8 + 188) = v36;
  v37 = 0.003921568859368563 * (double)HIBYTE(v9);
  *(float *)(v8 + 192) = v37;
  v11 = v4[1];
  v12 = *((_DWORD *)this + 28);
  if ( REGetGlobalDialogResourceManager() )
  {
    v13 = *(_DWORD *)(*(_DWORD *)(v12 + 752) + 4 * v11);
    v38 = *(struct IDirect3DDevice9 **)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v13);
  }
  else
  {
    v38 = 0;
  }
  v14 = *((_DWORD *)this + 377);
  v15 = *((_DWORD *)this + 357);
  v16 = *((_DWORD *)this + 379) - v14;
  v29 = v15;
  if ( v15 < *((_DWORD *)this + 381) )
  {
    while ( 1 )
    {
      v17 = *(_DWORD *)(*((_DWORD *)this + 380) + 4 * v15);
      lpVtbl = v38[132].lpVtbl;
      v30 = v16 - (_DWORD)lpVtbl;
      if ( v16 - (int)lpVtbl >= 0 )
      {
        SetRect((LPRECT)(v17 + 516), *((_DWORD *)this + 376), v14, *((_DWORD *)this + 378), (int)lpVtbl + v14);
        v14 += (int)v38[132].lpVtbl;
        *(_BYTE *)(v17 + 532) = 1;
        if ( *((_BYTE *)this + 1448) )
        {
          if ( v29 == *((_DWORD *)this + 205) )
          {
            CREDialog::DrawRect(*((CREDialog **)this + 28), (struct tagRECT *)(v17 + 516), 0xFF969696, 1.0);
            CREDialog::DrawTextW(
              *((CREDialog **)this + 28),
              (const wchar_t *)v17,
              v31,
              (struct tagRECT *)(v17 + 516),
              0,
              -1);
          }
          else
          {
            CREDialog::DrawTextW(
              *((CREDialog **)this + 28),
              (const wchar_t *)v17,
              v32,
              (struct tagRECT *)(v17 + 516),
              0,
              -1);
          }
        }
      }
      else
      {
        *(_BYTE *)(v17 + 532) = 0;
      }
      v15 = ++v29;
      if ( v29 >= *((_DWORD *)this + 381) )
        break;
      v16 = v30;
    }
  }
  v19 = GUISystem::Instance();
  GUISystem::GetLogicMousePos(v19, &pt);
  v20 = *((_DWORD *)this + 28);
  v21 = pt.x - *(_DWORD *)(v20 + 692);
  pt.x = v21;
  v22 = pt.y - *(_DWORD *)(v20 + 696);
  v23 = *((_BYTE *)this + 1448) == 0;
  pt.y = v22;
  if ( v23 )
  {
    if ( PtInRect((const RECT *)this + 91, (POINT)__PAIR64__(v22, v21)) || PtInRect((const RECT *)this + 92, pt) )
      v24 = *(_DWORD *)(*((_DWORD *)this + 30) + 4);
    else
      v24 = **((_DWORD **)this + 30);
  }
  else
  {
    v24 = *(_DWORD *)(*((_DWORD *)this + 30) + 8);
  }
  REBlendColor::Blend((REBlendColor *)(v24 + 36), 0, a3, 1.0);
  CREDialog::DrawSprite(
    *((CREDialog **)this + 28),
    (struct CREElement *)v24,
    (struct tagRECT *)((char *)this + 164),
    1.0);
  v25 = **((_DWORD **)this + 30);
  REBlendColor::Blend((REBlendColor *)(v25 + 116), 0, a3, 1.0);
  v26 = *((_DWORD *)this + 204);
  if ( v26 >= 0 && v26 < *((_DWORD *)this + 381) )
  {
    v27 = *(const wchar_t **)(*((_DWORD *)this + 380) + 4 * v26);
    if ( v27 )
      CREDialog::DrawTextW(
        *((CREDialog **)this + 28),
        v27,
        (struct CREElement *)v25,
        (struct tagRECT *)this + 91,
        0,
        -1);
  }
}
