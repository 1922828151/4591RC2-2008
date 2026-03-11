/*
 * func-name: ?DrawSprite@CREDialog@@QAEJPAVTexture@@PAUtagRECT@@1KM@Z
 * func-address: 0x100b62e0
 * callers: 0x100bc1e0, 0x100c0020
 * callees: 0x100b5280, 0x100d6d20, 0x101189f0, 0x10136140, 0x10178152, 0x101a26c0
 */

int __thiscall CREDialog::DrawSprite(
        CREDialog *this,
        struct Texture *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        unsigned int a5,
        float a6)
{
  LONG top; // edx
  LONG right; // ecx
  LONG bottom; // edx
  int v10; // eax
  int v11; // ecx
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  int v14; // esi
  int v15; // eax
  struct CREDialogResourceManager *v16; // eax
  int *v17; // ebx
  double v18; // st6
  int v19; // edx
  double v20; // st4
  double v21; // st3
  double v22; // st3
  int v23; // ecx
  double v24; // st7
  int v25; // eax
  int v26; // edi
  struct IDirect3DTexture9 *Texture; // eax
  int v29; // [esp+8h] [ebp-94h]
  float v30; // [esp+1Ch] [ebp-80h]
  float v31; // [esp+1Ch] [ebp-80h]
  float v32; // [esp+20h] [ebp-7Ch]
  float v33; // [esp+20h] [ebp-7Ch]
  float v34; // [esp+20h] [ebp-7Ch]
  int v35; // [esp+20h] [ebp-7Ch]
  float left; // [esp+30h] [ebp-6Ch] BYREF
  float v37; // [esp+34h] [ebp-68h]
  float v38; // [esp+38h] [ebp-64h]
  struct tagRECT rc; // [esp+3Ch] [ebp-60h] BYREF
  float v40; // [esp+4Ch] [ebp-50h]
  float v41; // [esp+50h] [ebp-4Ch]
  float v42; // [esp+54h] [ebp-48h]
  float v43; // [esp+58h] [ebp-44h]
  _BYTE v44[64]; // [esp+5Ch] [ebp-40h] BYREF

  top = a4->top;
  rc.left = a4->left;
  right = a4->right;
  rc.top = top;
  bottom = a4->bottom;
  v10 = *((_DWORD *)this + 174);
  rc.right = right;
  v11 = *((_DWORD *)this + 173);
  rc.bottom = bottom;
  OffsetRect(&rc, v11, v10);
  if ( *((_BYTE *)this + 176) )
    OffsetRect(&rc, 0, *((_DWORD *)this + 177));
  if ( *((_BYTE *)GUISystem::Instance() + 45) )
  {
    v12 = RenderDevice::Instance();
    v30 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v12 + 296))(v12) * 0.0009765625;
    v13 = RenderDevice::Instance();
    v32 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v13 + 300))(v13) / 768.0;
    rc.left = (int)((double)rc.left * v30);
    v14 = (int)(v30 * (double)rc.right);
    rc.right = v14;
    rc.top = (int)((double)rc.top * v32);
    v15 = (int)(v32 * (double)rc.bottom);
    rc.bottom = v15;
  }
  else
  {
    v15 = rc.bottom;
    v14 = rc.right;
  }
  v33 = (double)(v14 - rc.left) / (double)(a3->right - a3->left);
  v31 = (double)(v15 - rc.top) / (double)(a3->bottom - a3->top);
  D3DXMatrixScaling(v44, LODWORD(v33), LODWORD(v31), 1.0);
  v16 = REGetGlobalDialogResourceManager();
  (*(void (__stdcall **)(_DWORD, _BYTE *))(**((_DWORD **)v16 + 1) + 20))(*((_DWORD *)v16 + 1), v44);
  left = (float)rc.left;
  v37 = (float)rc.top;
  v38 = 0.0;
  left = left / v33;
  v37 = v37 / v31;
  v40 = (double)BYTE2(a5) * 0.003921568859368563;
  v41 = (double)BYTE1(a5) * 0.003921568859368563;
  v42 = 0.003921568859368563 * (double)(unsigned __int8)a5;
  v34 = (double)HIBYTE(a5) * 0.003921568859368563;
  v43 = *((float *)GUISystem::Instance() + 12) * *((float *)this + 23) * v34;
  v17 = (int *)*((_DWORD *)REGetGlobalDialogResourceManager() + 1);
  if ( v40 < 1.0 )
  {
    if ( v40 > 0.0 )
      v19 = (__int64)(v40 * 255.0 + 0.5);
    else
      v19 = 0;
    v20 = 0.0;
    v18 = 0.5;
  }
  else
  {
    v18 = 0.5;
    v19 = 255;
    v20 = 0.0;
  }
  v21 = v41;
  if ( v41 < 1.0 )
  {
    if ( v21 > v20 )
      v35 = (__int64)(v21 * 255.0 + v18);
    else
      v35 = 0;
  }
  else
  {
    v35 = 255;
  }
  v22 = v42;
  if ( v42 < 1.0 )
  {
    if ( v22 > v20 )
      v23 = (__int64)(v22 * 255.0 + v18);
    else
      v23 = 0;
  }
  else
  {
    v23 = 255;
  }
  v24 = v43;
  if ( v43 < 1.0 )
  {
    if ( v20 < v24 )
      v25 = (__int64)(v24 * 255.0 + v18);
    else
      v25 = 0;
  }
  else
  {
    v25 = 255;
  }
  v26 = *v17;
  v29 = v23 | ((v35 | ((v19 | (v25 << 8)) << 8)) << 8);
  Texture = Texture::GetTexture(a2);
  return (*(int (__stdcall **)(int *, struct IDirect3DTexture9 *, struct tagRECT *, _DWORD, float *, int))(v26 + 36))(
           v17,
           Texture,
           a3,
           0,
           &left,
           v29);
}
