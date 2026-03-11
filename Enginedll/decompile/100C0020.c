/*
 * func-name: ?Render@CRETextBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c0020
 * callers: none
 * callees: 0x100a5e50, 0x100b5e40, 0x100b62e0, 0x100b6890
 */

void __thiscall CRETextBox::Render(CRETextBox *this, struct IDirect3DDevice9 *a2, float a3)
{
  unsigned int v4; // ebp
  float *v5; // edi
  bool v6; // zf
  LONG v7; // edx
  LONG v8; // eax
  LONG v9; // ecx
  int v10; // eax
  bool v11; // c0
  bool v12; // c3
  int v13; // ebp
  double v14; // st4
  double v15; // st7
  int v16; // edx
  int v17; // ecx
  double v18; // rtt
  double v19; // st4
  double v20; // st7
  double v21; // rt0
  int v22; // eax
  double v23; // st7
  double v24; // rt1
  double v25; // st4
  int v26; // eax
  int v27; // eax
  const wchar_t *v28; // eax
  float v29; // [esp+4h] [ebp-38h]
  struct tagRECT v30; // [esp+1Ch] [ebp-20h] BYREF
  struct tagRECT v31; // [esp+2Ch] [ebp-10h] BYREF

  if ( *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    v4 = *((_BYTE *)this + 156) == 0;
    v5 = (float *)**((_DWORD **)this + 30);
    REBlendColor::Blend((REBlendColor *)(v5 + 9), v4, a3, 0.69999999);
    REBlendColor::Blend((REBlendColor *)(v5 + 29), v4, a3, 0.69999999);
    v6 = *((_BYTE *)this + 701) == 0;
    v7 = *((_DWORD *)this + 42);
    v8 = *((_DWORD *)this + 43);
    v30.left = *((_DWORD *)this + 41);
    v9 = *((_DWORD *)this + 44);
    v30.top = v7;
    v30.right = v8;
    v30.bottom = v9;
    if ( !v6 )
    {
      if ( *((_DWORD *)this + 174) )
      {
        v10 = *((_DWORD *)this + 174);
        v11 = v5[25] > 1.0;
        v12 = 1.0 == v5[25];
        v31.left = 0;
        v31.top = 0;
        v31.right = *(_DWORD *)(v10 + 80) - 1;
        v31.bottom = *(_DWORD *)(v10 + 84) - 1;
        if ( v11 || v12 )
        {
          v13 = 255;
        }
        else if ( v5[25] > 0.0 )
        {
          v13 = (__int64)(v5[25] * 255.0 + 0.5);
        }
        else
        {
          v13 = 0;
        }
        v14 = 1.0;
        v15 = 0.0;
        if ( v5[26] < 1.0 )
        {
          if ( v5[26] > 0.0 )
            v16 = (__int64)(v5[26] * 255.0 + 0.5);
          else
            v16 = 0;
          v14 = 1.0;
          v15 = 0.0;
        }
        else
        {
          v16 = 255;
        }
        if ( v14 > v5[27] )
        {
          v18 = v14;
          v19 = v15;
          v20 = v18;
          if ( v19 < v5[27] )
            v17 = (__int64)(v5[27] * 255.0 + 0.5);
          else
            v17 = 0;
          v21 = v19;
          v14 = v20;
          v15 = v21;
        }
        else
        {
          v17 = 255;
        }
        if ( v14 > v5[28] )
        {
          v24 = v14;
          v25 = v15;
          v23 = v24;
          if ( v25 < v5[28] )
            v22 = (__int64)(255.0 * v5[28] + 0.5);
          else
            v22 = 0;
        }
        else
        {
          v22 = 255;
          v23 = v14;
        }
        v29 = v23;
        CREDialog::DrawSprite(
          *((CREDialog **)this + 28),
          *((struct Texture **)this + 174),
          &v31,
          &v30,
          v17 | ((v16 | ((v13 | (v22 << 8)) << 8)) << 8),
          v29);
      }
      else
      {
        CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v5, &v30, 1.0);
      }
    }
    v26 = *((_DWORD *)this + 176);
    v30.left += v26;
    v30.right -= v26;
    v27 = *((_DWORD *)this + 177);
    v30.top += v27;
    v30.bottom -= v27;
    if ( *((_DWORD *)this + 139) < 8u )
      v28 = (const wchar_t *)((char *)this + 536);
    else
      v28 = (const wchar_t *)*((_DWORD *)this + 134);
    CREDialog::DrawTextW(*((CREDialog **)this + 28), v28, (struct CREElement *)v5, &v30, 1, -1);
  }
}
