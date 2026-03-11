/*
 * func-name: ?Render@CREPropertiesList@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bdb80
 * callers: none
 * callees: 0x1006a3d0, 0x100a5e50, 0x100b5280, 0x100b5850, 0x100b5b90, 0x100b5e40, 0x100b6890
 */

void __thiscall CREPropertiesList::Render(CREPropertiesList *this, struct IDirect3DDevice9 *a2, float a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  LONG v6; // edx
  LONG v7; // eax
  int v8; // eax
  int v9; // edx
  LONG v10; // ecx
  LONG v11; // edx
  int v12; // edi
  LONG v13; // eax
  LONG v14; // ecx
  LONG v15; // edx
  LONG v16; // eax
  LONG v17; // ecx
  struct CREDialogResourceManager *v18; // eax
  int v19; // edx
  LONG bottom; // ebp
  int v21; // ecx
  int v22; // ebx
  bool v23; // cc
  int v24; // edx
  int v25; // edi
  int v26; // ecx
  int v27; // eax
  bool v28; // zf
  CREDialog *v29; // ecx
  int v30; // ecx
  struct CREElement *v31; // [esp+2Ch] [ebp-38h]
  struct CREElement *v32; // [esp+30h] [ebp-34h]
  struct tagRECT rc; // [esp+34h] [ebp-30h] BYREF
  struct tagRECT v34; // [esp+44h] [ebp-20h] BYREF
  struct tagPOINT v35; // [esp+54h] [ebp-10h] BYREF
  LONG right; // [esp+5Ch] [ebp-8h]
  LONG top; // [esp+60h] [ebp-4h]

  if ( *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    v4 = (_DWORD *)**((_DWORD **)this + 30);
    v32 = (struct CREElement *)v4;
    v4[2] = 4;
    REBlendColor::Blend((REBlendColor *)(v4 + 9), 0, a3, 0.69999999);
    REBlendColor::Blend((REBlendColor *)(v4 + 29), 0, a3, 0.69999999);
    v31 = *(struct CREElement **)(*((_DWORD *)this + 30) + 4);
    *((_DWORD *)v31 + 2) = 4;
    REBlendColor::Blend((struct CREElement *)((char *)v31 + 36), 0, a3, 0.69999999);
    REBlendColor::Blend((struct CREElement *)((char *)v31 + 116), 0, a3, 0.69999999);
    CREDialog::DrawSprite(
      *((CREDialog **)this + 28),
      (struct CREElement *)v4,
      (struct tagRECT *)((char *)this + 164),
      1.0);
    v5 = *((_DWORD *)this + 28);
    v6 = *((_DWORD *)this + 42);
    v28 = *(_BYTE *)(v5 + 176) == 0;
    v34.left = *((_DWORD *)this + 135) + 4;
    v34.right = v34.left;
    v7 = *((_DWORD *)this + 44);
    v34.top = v6;
    v34.bottom = v7;
    if ( !v28 )
    {
      v8 = *(_DWORD *)(v5 + 708);
      v9 = *((_DWORD *)this + 296);
      v34.top += v9 + v8;
      v34.bottom += v8 - v9;
    }
    CREDialog::DrawPolyLine((CREDialog *)v5, (int)v4, (struct tagPOINT *)&v34, 2u, 0xFFC8C8C8);
    if ( *((int *)this + 306) > 0 )
    {
      v10 = *((_DWORD *)this + 134);
      v11 = *((_DWORD *)this + 135);
      v12 = v4[1];
      v34.left = *((_DWORD *)this + 133);
      v13 = *((_DWORD *)this + 136);
      v34.top = v10;
      v14 = *((_DWORD *)this + 137);
      v34.right = v11;
      v15 = *((_DWORD *)this + 138);
      v34.bottom = v13;
      v16 = *((_DWORD *)this + 139);
      rc.left = v14;
      v17 = *((_DWORD *)this + 140);
      rc.top = v15;
      rc.right = v16;
      rc.bottom = v17;
      v18 = REGetGlobalDialogResourceManager();
      v19 = *((_DWORD *)this + 296);
      bottom = v34.top + v19 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v18 + 5) + 4 * v12) + 528);
      v21 = v19 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v18 + 5) + 4 * v12) + 528);
      v28 = byte_11240B45 == 0;
      v34.bottom = bottom;
      *((_DWORD *)this + 298) = bottom - v34.top;
      if ( v28 )
      {
        if ( v21 )
          CREScrollBar::SetPageSize(
            (CREPropertiesList *)((char *)this + 564),
            (*((_DWORD *)this + 136) + -2 * v19 - *((_DWORD *)this + 134)) / v21);
        else
          CREScrollBar::SetPageSize(
            (CREPropertiesList *)((char *)this + 564),
            *((_DWORD *)this + 136) + -2 * v19 - *((_DWORD *)this + 134));
        byte_11240B45 = 1;
      }
      v22 = *((_DWORD *)this + 291);
      v23 = v22 < *((_DWORD *)this + 306);
      v34.right = *((_DWORD *)this + 135);
      if ( v23 )
      {
        while ( 1 )
        {
          if ( bottom > *((_DWORD *)this + 136) - *((_DWORD *)this + 296) )
            goto LABEL_35;
          v24 = *((_DWORD *)this + 305);
          v25 = *(_DWORD *)(v24 + 4 * v22);
          if ( (*((_DWORD *)this + 299) & 1) == 0 && v22 == *((_DWORD *)this + 300) )
          {
LABEL_25:
            v29 = (CREDialog *)*((_DWORD *)this + 28);
            rc.bottom = bottom;
            rc.top = v34.top;
            CREDialog::DrawSprite(v29, v31, &rc, 1.0);
            CREDialog::DrawTextW(*((CREDialog **)this + 28), (const wchar_t *)v25, v31, &v34, 0, -1);
            goto LABEL_34;
          }
          if ( (*((_DWORD *)this + 299) & 1) != 0 )
            break;
LABEL_27:
          rc.top = v34.top;
          rc.bottom = bottom + 3;
          if ( v22 )
          {
            right = rc.right;
            v30 = *((_DWORD *)this + 28);
            v28 = *(_BYTE *)(v30 + 176) == 0;
            v35.x = rc.left;
            v35.y = v34.top;
            top = v34.top;
            if ( !v28 )
            {
              v35.y = *(_DWORD *)(v30 + 708) + v34.top;
              top = v35.y;
            }
            CREDialog::DrawPolyLine((CREDialog *)v30, v25, &v35, 2u, 0xFFC8C8C8);
          }
          if ( *(_BYTE *)(v25 + 541) )
          {
            InflateRect(&rc, 0, -2);
            OffsetRect(&rc, 0, -2);
            CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, 0xFFC8C8C8, 1.0);
          }
          CREDialog::DrawTextW(*((CREDialog **)this + 28), (const wchar_t *)v25, v32, &v34, 0, -1);
LABEL_34:
          (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v25 + 512) + 156))(
            *(_DWORD *)(v25 + 512),
            *((_DWORD *)this + 304),
            v34.top + 1);
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v25 + 512) + 160))(
            *(_DWORD *)(v25 + 512),
            *((_DWORD *)this + 43)
          - *((_DWORD *)this + 295)
          - *((_DWORD *)this + 304)
          - *((_DWORD *)this + 296)
          - *((_DWORD *)this + 41),
            *((_DWORD *)this + 298) - 2);
          (*(void (__stdcall **)(struct IDirect3DDevice9 *, _DWORD))(**(_DWORD **)(v25 + 512) + 20))(a2, LODWORD(a3));
          OffsetRect(&v34, 0, *((_DWORD *)this + 298));
          if ( ++v22 >= *((_DWORD *)this + 306) )
            goto LABEL_35;
          bottom = v34.bottom;
        }
        if ( *((_BYTE *)this + 1208) )
        {
          v26 = *((_DWORD *)this + 300);
          if ( v22 < v26 )
            goto LABEL_22;
          v27 = *((_DWORD *)this + 301);
          if ( v22 < v27 )
          {
LABEL_23:
            v28 = *(_BYTE *)(*(_DWORD *)(v24 + 4 * v27) + 540) == 0;
            goto LABEL_24;
          }
          if ( v22 <= v26 )
          {
LABEL_22:
            v27 = *((_DWORD *)this + 301);
            if ( v22 > v27 )
              goto LABEL_23;
          }
        }
        v28 = *(_BYTE *)(v25 + 540) == 0;
LABEL_24:
        if ( !v28 )
          goto LABEL_25;
        goto LABEL_27;
      }
    }
LABEL_35:
    (*(void (__stdcall **)(struct IDirect3DDevice9 *, _DWORD))(*((_DWORD *)this + 141) + 20))(a2, LODWORD(a3));
  }
}
