/*
 * func-name: ?DrawSprite@CREDialog@@QAEJPAVCREElement@@PAUtagRECT@@M@Z
 * func-address: 0x100b5e40
 * callers: 0x100bb510, 0x100bc320, 0x100bc680, 0x100bca20, 0x100bcdf0, 0x100bd160, 0x100bd450, 0x100bd6f0, 0x100bd9b0, 0x100bdb80, 0x100bdfc0, 0x100bf3d0, 0x100bf9b0, 0x100bfe60, 0x100c0020, 0x100c02d0, 0x100c0490, 0x100c0ad0, 0x100c0c50, 0x100c14d0, 0x100c1ce0, 0x100c30e0, 0x100c33b0, 0x100c3c90, 0x100c4d20, 0x10150580, 0x10150600, 0x10150e90, 0x101517d0, 0x10153a50, 0x10153f50, 0x10154190, 0x101543d0, 0x10155030, 0x10156140
 * callees: 0x100b5280, 0x100d6d20, 0x101189f0, 0x1017814c, 0x101a26c0
 */

int __thiscall CREDialog::DrawSprite(CREDialog *this, struct CREElement *a2, struct tagRECT *a3, float a4)
{
  int v5; // ecx
  int v6; // edx
  LONG left; // ecx
  LONG top; // edx
  LONG right; // ecx
  LONG bottom; // edx
  int v11; // eax
  int v12; // ecx
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  LONG v15; // eax
  float v16; // ebx
  int v17; // ebx
  int v18; // ebx
  struct CREDialogResourceManager *v19; // eax
  float *v20; // edx
  double v21; // st7
  struct CREDialogResourceManager *v22; // eax
  float v23; // edx
  float v24; // eax
  float v25; // ecx
  int v26; // ecx
  double v27; // st6
  double v28; // st5
  double v29; // st4
  double v30; // st4
  double v31; // st3
  int v32; // esi
  double v33; // st3
  int v34; // edx
  double v35; // st7
  int v36; // eax
  int v37; // esi
  struct CREDialogResourceManager *v38; // eax
  float v40; // [esp+8h] [ebp-F4h]
  __int64 *v41; // [esp+10h] [ebp-ECh]
  float v42; // [esp+14h] [ebp-E8h]
  float *v43; // [esp+18h] [ebp-E4h]
  float v44; // [esp+34h] [ebp-C8h]
  float v45; // [esp+34h] [ebp-C8h]
  float v46; // [esp+38h] [ebp-C4h]
  float v47[2]; // [esp+3Ch] [ebp-C0h] BYREF
  __int64 v48; // [esp+44h] [ebp-B8h] BYREF
  struct tagRECT rc; // [esp+4Ch] [ebp-B0h] BYREF
  float v50; // [esp+5Ch] [ebp-A0h] BYREF
  float v51; // [esp+60h] [ebp-9Ch]
  float v52; // [esp+64h] [ebp-98h]
  float v53; // [esp+68h] [ebp-94h]
  int v54; // [esp+6Ch] [ebp-90h] BYREF
  int v55; // [esp+70h] [ebp-8Ch]
  int v56; // [esp+74h] [ebp-88h]
  int v57; // [esp+78h] [ebp-84h]
  _BYTE v58[64]; // [esp+7Ch] [ebp-80h] BYREF
  _BYTE v59[64]; // [esp+BCh] [ebp-40h] BYREF

  if ( 0.0 == *((float *)a2 + 28) )
    return 0;
  v5 = *((_DWORD *)a2 + 4);
  v6 = *((_DWORD *)a2 + 5);
  v54 = *((_DWORD *)a2 + 3);
  v57 = *((_DWORD *)a2 + 6);
  v55 = v5;
  left = a3->left;
  v56 = v6;
  top = a3->top;
  rc.left = left;
  right = a3->right;
  rc.top = top;
  bottom = a3->bottom;
  v11 = *((_DWORD *)this + 174);
  rc.right = right;
  v12 = *((_DWORD *)this + 173);
  rc.bottom = bottom;
  OffsetRect(&rc, v12, v11);
  if ( *((_BYTE *)GUISystem::Instance() + 45) )
  {
    v13 = RenderDevice::Instance();
    LODWORD(v47[0]) = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v13 + 296))(v13);
    v44 = (double)SLODWORD(v47[0]) * 0.0009765625;
    v14 = RenderDevice::Instance();
    v47[0] = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v14 + 300))(v14) / 768.0;
    rc.left = (int)((double)rc.left * v44);
    rc.right = (int)(v44 * (double)rc.right);
    rc.top = (int)((double)rc.top * v47[0]);
    v15 = (int)(v47[0] * (double)rc.bottom);
    rc.bottom = v15;
    if ( v15 == rc.top )
      rc.bottom = v15 + 1;
  }
  v16 = *(float *)a2;
  if ( !REGetGlobalDialogResourceManager() )
    return 0;
  v17 = *(_DWORD *)(*((_DWORD *)this + 185) + 4 * LODWORD(v16));
  v18 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v17);
  if ( !v18 || !*(_DWORD *)(v18 + 520) )
    return 0;
  v47[0] = (double)(rc.right - rc.left) / (double)(v56 - v54);
  v45 = (double)(rc.bottom - rc.top) / (double)(v57 - v55);
  v19 = REGetGlobalDialogResourceManager();
  (*(void (__stdcall **)(_DWORD, _BYTE *))(**((_DWORD **)v19 + 1) + 16))(*((_DWORD *)v19 + 1), v59);
  if ( *((_BYTE *)a2 + 28) )
  {
    v50 = (float)rc.left;
    v43 = &v50;
    v51 = (float)rc.top;
    v20 = v47;
    *(float *)&v48 = (double)(rc.right - rc.left) * 0.5;
    *((float *)&v48 + 1) = 0.5 * (double)(rc.bottom - rc.top);
    v47[1] = v45;
    v46 = *((float *)a2 + 8) * 3.141592741012573 / 180.0;
    v42 = v46;
    v21 = 0.0;
    v41 = &v48;
  }
  else
  {
    v43 = (float *)&v48;
    v20 = &v50;
    *(float *)&v48 = (float)rc.left;
    *((float *)&v48 + 1) = (float)rc.top;
    v50 = v47[0];
    v51 = v45;
    v21 = 0.0;
    v42 = 0.0;
    v41 = 0;
  }
  v40 = v21;
  D3DXMatrixTransformation2D(v58, 0, LODWORD(v40), v20, v41, LODWORD(v42), v43);
  v22 = REGetGlobalDialogResourceManager();
  (*(void (__stdcall **)(_DWORD, _BYTE *))(**((_DWORD **)v22 + 1) + 20))(*((_DWORD *)v22 + 1), v58);
  v23 = *((float *)a2 + 26);
  v24 = *((float *)a2 + 27);
  v50 = *((float *)a2 + 25);
  v25 = *((float *)a2 + 28);
  v51 = v23;
  v52 = v24;
  v53 = v25;
  v53 = *((float *)GUISystem::Instance() + 12) * *((float *)this + 23) * a4 * v25;
  v26 = *((_DWORD *)REGetGlobalDialogResourceManager() + 1);
  if ( v50 < 1.0 )
  {
    if ( v50 > 0.0 )
    {
      v30 = 0.5;
      v48 = (__int64)(v50 * 255.0 + 0.5);
      LODWORD(v47[0]) = v48;
    }
    else
    {
      v47[0] = 0.0;
      v30 = 0.5;
    }
    v28 = v30;
    v29 = 0.0;
    v27 = 255.0;
  }
  else
  {
    v27 = 255.0;
    LODWORD(v47[0]) = 255;
    v28 = 0.5;
    v29 = 0.0;
  }
  v31 = v51;
  if ( v51 < 1.0 )
  {
    if ( v31 > v29 )
    {
      v48 = (__int64)(v31 * v27 + v28);
      v32 = v48;
    }
    else
    {
      v32 = 0;
    }
  }
  else
  {
    v32 = 255;
  }
  v33 = v52;
  if ( v52 < 1.0 )
  {
    if ( v33 > v29 )
    {
      v48 = (__int64)(v33 * v27 + v28);
      v34 = v48;
    }
    else
    {
      v34 = 0;
    }
  }
  else
  {
    v34 = 255;
  }
  v35 = v53;
  if ( v53 < 1.0 )
  {
    if ( v29 < v35 )
    {
      v48 = (__int64)(v28 + v27 * v35);
      v36 = v48;
    }
    else
    {
      v36 = 0;
    }
  }
  else
  {
    v36 = 255;
  }
  v37 = (*(int (__stdcall **)(int, _DWORD, int *, _DWORD, _DWORD, int))(*(_DWORD *)v26 + 36))(
          v26,
          *(_DWORD *)(v18 + 520),
          &v54,
          0,
          0,
          v34 | ((v32 | ((LODWORD(v47[0]) | (v36 << 8)) << 8)) << 8));
  v38 = REGetGlobalDialogResourceManager();
  (*(void (__stdcall **)(_DWORD, _BYTE *))(**((_DWORD **)v38 + 1) + 20))(*((_DWORD *)v38 + 1), v59);
  return v37;
}
