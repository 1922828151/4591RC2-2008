/*
 * func-name: ?DrawTextTexture@CREDialog@@QAEJPAVTexture@@PAUtagRECT@@1K@Z
 * func-address: 0x100b6bc0
 * callers: 0x100b6f70
 * callees: 0x100b5280, 0x100d6d20, 0x101189f0, 0x10136140, 0x10178152, 0x101a26c0
 */

int __thiscall CREDialog::DrawTextTexture(
        CREDialog *this,
        struct Texture *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  LONG right; // edx
  LONG top; // ecx
  LONG bottom; // eax
  int v9; // ecx
  int v10; // edx
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  int left; // ebx
  int v14; // eax
  LONG v15; // edx
  LONG v16; // ecx
  struct CREDialogResourceManager *v17; // eax
  int *v18; // ebx
  double v19; // st6
  int v20; // edx
  double v21; // st4
  double v22; // st3
  double v23; // st3
  int v24; // ecx
  double v25; // st7
  int v26; // eax
  int v27; // edi
  struct IDirect3DTexture9 *Texture; // eax
  int v30; // [esp+8h] [ebp-94h]
  float v31; // [esp+1Ch] [ebp-80h]
  float v32; // [esp+1Ch] [ebp-80h]
  float v33; // [esp+20h] [ebp-7Ch]
  float v34; // [esp+20h] [ebp-7Ch]
  float v35; // [esp+20h] [ebp-7Ch]
  int v36; // [esp+20h] [ebp-7Ch]
  float v37; // [esp+30h] [ebp-6Ch] BYREF
  float v38; // [esp+34h] [ebp-68h]
  float v39; // [esp+38h] [ebp-64h]
  struct tagRECT rc; // [esp+3Ch] [ebp-60h] BYREF
  float v41; // [esp+4Ch] [ebp-50h]
  float v42; // [esp+50h] [ebp-4Ch]
  float v43; // [esp+54h] [ebp-48h]
  float v44; // [esp+58h] [ebp-44h]
  _BYTE v45[64]; // [esp+5Ch] [ebp-40h] BYREF

  right = a4->right;
  top = a4->top;
  rc.left = a4->left;
  bottom = a4->bottom;
  rc.top = top;
  v9 = *((_DWORD *)this + 174);
  rc.right = right;
  v10 = *((_DWORD *)this + 173);
  rc.bottom = bottom;
  OffsetRect(&rc, v10, v9);
  if ( *((_BYTE *)this + 176) )
    OffsetRect(&rc, 0, *((_DWORD *)this + 177));
  if ( *((_BYTE *)GUISystem::Instance() + 45) )
  {
    v11 = RenderDevice::Instance();
    v31 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v11 + 296))(v11) * 0.0009765625;
    v12 = RenderDevice::Instance();
    v33 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v12 + 300))(v12) / 768.0;
    left = (int)((double)rc.left * v31);
    rc.left = left;
    v14 = (int)((double)rc.top * v33);
    v15 = left + a4->right - a4->left;
    v16 = v14 + a4->bottom - a4->top;
    rc.top = v14;
    rc.right = v15;
    rc.bottom = v16;
  }
  else
  {
    v16 = rc.bottom;
    v15 = rc.right;
    v14 = rc.top;
    left = rc.left;
  }
  v34 = (double)(v15 - left) / (double)(a3->right - a3->left);
  v32 = (double)(v16 - v14) / (double)(a3->bottom - a3->top);
  D3DXMatrixScaling(v45, LODWORD(v34), LODWORD(v32), 1.0);
  v17 = REGetGlobalDialogResourceManager();
  (*(void (__stdcall **)(_DWORD, _BYTE *))(**((_DWORD **)v17 + 1) + 20))(*((_DWORD *)v17 + 1), v45);
  v37 = (float)rc.left;
  v38 = (float)rc.top;
  v39 = 0.0;
  v37 = v37 / v34;
  v38 = v38 / v32;
  v41 = (double)BYTE2(a5) * 0.003921568859368563;
  v42 = (double)BYTE1(a5) * 0.003921568859368563;
  v43 = 0.003921568859368563 * (double)(unsigned __int8)a5;
  v35 = (double)HIBYTE(a5) * 0.003921568859368563;
  v44 = *((float *)GUISystem::Instance() + 12) * *((float *)this + 23) * v35;
  v18 = (int *)*((_DWORD *)REGetGlobalDialogResourceManager() + 1);
  if ( v41 < 1.0 )
  {
    if ( v41 > 0.0 )
      v20 = (__int64)(v41 * 255.0 + 0.5);
    else
      v20 = 0;
    v21 = 0.0;
    v19 = 0.5;
  }
  else
  {
    v19 = 0.5;
    v20 = 255;
    v21 = 0.0;
  }
  v22 = v42;
  if ( v42 < 1.0 )
  {
    if ( v22 > v21 )
      v36 = (__int64)(v22 * 255.0 + v19);
    else
      v36 = 0;
  }
  else
  {
    v36 = 255;
  }
  v23 = v43;
  if ( v43 < 1.0 )
  {
    if ( v23 > v21 )
      v24 = (__int64)(v23 * 255.0 + v19);
    else
      v24 = 0;
  }
  else
  {
    v24 = 255;
  }
  v25 = v44;
  if ( v44 < 1.0 )
  {
    if ( v21 < v25 )
      v26 = (__int64)(v25 * 255.0 + v19);
    else
      v26 = 0;
  }
  else
  {
    v26 = 255;
  }
  v27 = *v18;
  v30 = v24 | ((v36 | ((v20 | (v26 << 8)) << 8)) << 8);
  Texture = Texture::GetTexture(a2);
  return (*(int (__stdcall **)(int *, struct IDirect3DTexture9 *, struct tagRECT *, _DWORD, float *, int))(v27 + 36))(
           v18,
           Texture,
           a3,
           0,
           &v37,
           v30);
}
