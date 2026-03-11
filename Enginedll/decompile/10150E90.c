/*
 * func-name: ?Render@CPaster@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x10150e90
 * callers: none
 * callees: 0x100b5e40, 0x100cdd20, 0x100cdd30
 */

void __thiscall CPaster::Render(CPaster *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // eax
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  float *v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  float *v12; // eax
  int v13; // eax
  float *v14; // eax
  _DWORD *v15; // eax
  int v16; // edx
  int v17; // ebx
  int v18; // ebp
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  float *v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  _DWORD *v26; // eax
  int v27; // [esp-4h] [ebp-5Ch]
  int v28; // [esp+0h] [ebp-58h]
  int v29; // [esp+0h] [ebp-58h]
  int v30; // [esp+0h] [ebp-58h]
  int v31; // [esp+0h] [ebp-58h]
  int v32; // [esp+14h] [ebp-44h]
  struct tagRECT rc; // [esp+38h] [ebp-20h] BYREF
  int v34; // [esp+50h] [ebp-8h]
  int v35; // [esp+54h] [ebp-4h]

  if ( !*((_BYTE *)this + 544) )
  {
    v4 = *((_DWORD *)this + 133);
    v5 = *((_DWORD *)this + 43);
    v6 = *((_DWORD *)this + 41);
    v32 = v5;
    if ( v4 )
    {
      v28 = *((_DWORD *)this + 42) + sub_100CDD30(v4 + 12);
      v7 = sub_100CDD20((_DWORD *)(*((_DWORD *)this + 133) + 12));
      SetRect(&rc, v6, *((_DWORD *)this + 42), v6 + v7, v28);
      v8 = (float *)(*((_DWORD *)this + 133) + 100);
      *v8 = 1.0;
      v8[1] = 1.0;
      v8[2] = 1.0;
      v8[3] = 1.0;
      CREDialog::DrawSprite(*((CREDialog **)this + 28), *((struct CREElement **)this + 133), &rc, 1.0);
      v6 += sub_100CDD20((_DWORD *)(*((_DWORD *)this + 133) + 12));
    }
    v9 = *((_DWORD *)this + 134);
    if ( v9 )
    {
      v10 = *((_DWORD *)this + 42);
      v29 = v10 + sub_100CDD30(v9 + 12);
      v27 = *((_DWORD *)this + 43);
      v11 = sub_100CDD20((_DWORD *)(*((_DWORD *)this + 134) + 12));
      SetRect(&rc, *((_DWORD *)this + 43) - v11, v10, v27, v29);
      v12 = (float *)(*((_DWORD *)this + 134) + 100);
      *v12 = 1.0;
      v12[1] = 1.0;
      v12[2] = 1.0;
      v12[3] = 1.0;
      CREDialog::DrawSprite(*((CREDialog **)this + 28), *((struct CREElement **)this + 134), &rc, 1.0);
      v5 -= sub_100CDD20((_DWORD *)(*((_DWORD *)this + 134) + 12));
      v32 = v5;
    }
    if ( *((_DWORD *)this + 135) && v6 < v5 )
    {
      do
      {
        if ( v6 + sub_100CDD20((_DWORD *)(*((_DWORD *)this + 135) + 12)) > v5 )
        {
          v15 = (_DWORD *)*((_DWORD *)this + 135);
          v16 = v15[5];
          v17 = v15[3];
          v18 = v15[4];
          v35 = v15[6];
          v19 = *((_DWORD *)this + 135);
          v20 = v32 + *(_DWORD *)(v19 + 12) - v6;
          v34 = v16;
          *(_DWORD *)(v19 + 20) = v20;
          v31 = *((_DWORD *)this + 42) + sub_100CDD30(*((_DWORD *)this + 135) + 12);
          v21 = sub_100CDD20((_DWORD *)(*((_DWORD *)this + 135) + 12));
          SetRect(&rc, v6, *((_DWORD *)this + 42), v6 + v21, v31);
          v22 = (float *)(*((_DWORD *)this + 135) + 100);
          *v22 = 1.0;
          v22[1] = 1.0;
          v22[2] = 1.0;
          v22[3] = 1.0;
          CREDialog::DrawSprite(*((CREDialog **)this + 28), *((struct CREElement **)this + 135), &rc, 1.0);
          v23 = sub_100CDD20((_DWORD *)(*((_DWORD *)this + 135) + 12));
          v24 = v34;
          v25 = v35;
          v6 += v23;
          v26 = (_DWORD *)(*((_DWORD *)this + 135) + 12);
          *v26 = v17;
          v26[1] = v18;
          v5 = v32;
          v26[2] = v24;
          v26[3] = v25;
        }
        else
        {
          v30 = *((_DWORD *)this + 42) + sub_100CDD30(*((_DWORD *)this + 135) + 12);
          v13 = sub_100CDD20((_DWORD *)(*((_DWORD *)this + 135) + 12));
          SetRect(&rc, v6, *((_DWORD *)this + 42), v6 + v13, v30);
          v14 = (float *)(*((_DWORD *)this + 135) + 100);
          *v14 = 1.0;
          v14[1] = 1.0;
          v14[2] = 1.0;
          v14[3] = 1.0;
          CREDialog::DrawSprite(*((CREDialog **)this + 28), *((struct CREElement **)this + 135), &rc, 1.0);
          v6 += sub_100CDD20((_DWORD *)(*((_DWORD *)this + 135) + 12));
        }
      }
      while ( v6 < v5 );
    }
  }
}
