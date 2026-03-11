/*
 * func-name: ?DrawRect@CREDialog@@QAEJPAUtagRECT@@KM@Z
 * func-address: 0x100b5850
 * callers: 0x100bc680, 0x100bd9b0, 0x100bdb80, 0x100bdfc0, 0x100be7e0, 0x100befd0, 0x100bf9b0, 0x100c0490, 0x100c0c50, 0x100c2500, 0x100c2cc0, 0x100c4d20, 0x10150820, 0x10154190, 0x10156140
 * callees: 0x100b5280, 0x100d6d20, 0x101189f0, 0x101a26c0
 */

int __thiscall CREDialog::DrawRect(CREDialog *this, struct tagRECT *a2, unsigned int a3, float a4)
{
  LONG top; // edx
  LONG right; // ecx
  LONG bottom; // edx
  int v8; // eax
  int v9; // ecx
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  double v12; // st6
  double v13; // st5
  struct CREDialogResourceManager *v14; // eax
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  struct RenderDevice *v17; // eax
  struct RenderDevice *v18; // eax
  struct RenderDevice *v19; // eax
  struct RenderDevice *v20; // eax
  struct RenderDevice *v21; // eax
  struct RenderDevice *v22; // eax
  float v24; // [esp+40h] [ebp-90h]
  float v25; // [esp+44h] [ebp-8Ch]
  float v26; // [esp+44h] [ebp-8Ch]
  float v27; // [esp+44h] [ebp-8Ch]
  float v28; // [esp+44h] [ebp-8Ch]
  float v29; // [esp+44h] [ebp-8Ch]
  struct tagRECT rc; // [esp+4Ch] [ebp-84h] BYREF
  int v31; // [esp+5Ch] [ebp-74h] BYREF
  float v32[4]; // [esp+60h] [ebp-70h] BYREF
  unsigned int v33; // [esp+70h] [ebp-60h]
  float v34; // [esp+74h] [ebp-5Ch]
  float v35; // [esp+78h] [ebp-58h]
  float v36; // [esp+7Ch] [ebp-54h]
  float v37; // [esp+80h] [ebp-50h]
  float v38; // [esp+84h] [ebp-4Ch]
  float v39; // [esp+88h] [ebp-48h]
  unsigned int v40; // [esp+8Ch] [ebp-44h]
  float v41; // [esp+90h] [ebp-40h]
  float v42; // [esp+94h] [ebp-3Ch]
  float v43; // [esp+98h] [ebp-38h]
  float v44; // [esp+9Ch] [ebp-34h]
  float v45; // [esp+A0h] [ebp-30h]
  float v46; // [esp+A4h] [ebp-2Ch]
  unsigned int v47; // [esp+A8h] [ebp-28h]
  float v48; // [esp+ACh] [ebp-24h]
  float v49; // [esp+B0h] [ebp-20h]
  float v50; // [esp+B4h] [ebp-1Ch]
  float v51; // [esp+B8h] [ebp-18h]
  float v52; // [esp+BCh] [ebp-14h]
  float v53; // [esp+C0h] [ebp-10h]
  unsigned int v54; // [esp+C4h] [ebp-Ch]
  float v55; // [esp+C8h] [ebp-8h]
  float v56; // [esp+CCh] [ebp-4h]

  top = a2->top;
  rc.left = a2->left;
  right = a2->right;
  rc.top = top;
  bottom = a2->bottom;
  v8 = *((_DWORD *)this + 174);
  rc.right = right;
  v9 = *((_DWORD *)this + 173);
  rc.bottom = bottom;
  OffsetRect(&rc, v9, v8);
  if ( *((_BYTE *)this + 176) )
    OffsetRect(&rc, 0, *((_DWORD *)this + 177));
  if ( *((_BYTE *)GUISystem::Instance() + 45) )
  {
    v10 = RenderDevice::Instance();
    v25 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v10 + 296))(v10) * 0.0009765625;
    v11 = RenderDevice::Instance();
    v24 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v11 + 300))(v11) / 768.0;
    rc.left = (int)((double)rc.left * v25);
    rc.right = (int)(v25 * (double)rc.right);
    rc.top = (int)((double)rc.top * v24);
    rc.bottom = (int)(v24 * (double)rc.bottom);
  }
  v33 = a3 & 0xFFFFFF
      | ((unsigned int)(__int64)((double)HIBYTE(a3) * *((float *)GUISystem::Instance() + 12) * *((float *)this + 23) * a4) << 24);
  v40 = v33;
  v47 = v33;
  v54 = v33;
  v26 = (double)rc.left - 0.5;
  v12 = v26;
  v32[0] = v26;
  v27 = (double)rc.top - 0.5;
  v13 = v27;
  v32[1] = v27;
  v32[2] = 0.5;
  v32[3] = 1.0;
  v34 = 0.0;
  v35 = 0.0;
  v28 = (double)rc.right - 0.5;
  v36 = v28;
  v37 = v13;
  v38 = 0.5;
  v39 = 1.0;
  v41 = 0.0;
  v42 = 0.0;
  v43 = v28;
  v29 = (double)rc.bottom - 0.5;
  v44 = v29;
  v45 = 0.5;
  v46 = 1.0;
  v48 = 0.0;
  v49 = 0.0;
  v50 = v12;
  v51 = v29;
  v52 = 0.5;
  v53 = 1.0;
  v55 = 0.0;
  v56 = 0.0;
  REGetGlobalDialogResourceManager();
  v14 = REGetGlobalDialogResourceManager();
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)v14 + 1) + 40))(*((_DWORD *)v14 + 1));
  v31 = 0;
  v15 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, int *))(**((_DWORD **)v15 + 427) + 352))(*((_DWORD *)v15 + 427), &v31);
  v16 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v16 + 416))(v16, dword_10281554);
  v17 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v17 + 440))(v17, 0, 1, 3);
  v18 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v18 + 440))(v18, 0, 4, 3);
  v19 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, int, int, float *, int))(**((_DWORD **)v19 + 427) + 332))(
    *((_DWORD *)v19 + 427),
    6,
    2,
    v32,
    28);
  v20 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v20 + 440))(v20, 0, 1, 4);
  v21 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v21 + 440))(v21, 0, 4, 4);
  v22 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, int))(**((_DWORD **)v22 + 427) + 348))(*((_DWORD *)v22 + 427), v31);
  (*(void (__stdcall **)(int))(*(_DWORD *)v31 + 8))(v31);
  return 0;
}
