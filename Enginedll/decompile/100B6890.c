/*
 * func-name: ?DrawTextW@CREDialog@@QAEJPB_WPAVCREElement@@PAUtagRECT@@_NH@Z
 * func-address: 0x100b6890
 * callers: 0x100bb2f0, 0x100bb510, 0x100bbba0, 0x100bc1e0, 0x100bc320, 0x100bc680, 0x100bca20, 0x100bd450, 0x100bd6f0, 0x100bdb80, 0x100bdfc0, 0x100be7e0, 0x100befd0, 0x100bf3d0, 0x100bfe60, 0x100c0020, 0x100c03b0, 0x100c0490, 0x100c0ad0, 0x100c0c50, 0x100c2500, 0x100c2cc0, 0x100c30e0, 0x100c4b70, 0x100c5390, 0x10153f50, 0x10154210, 0x101543d0, 0x10154c10, 0x10156140
 * callees: 0x100b5280, 0x100d6d20, 0x101189f0, 0x10178152
 */

int __thiscall CREDialog::DrawTextW(
        CREDialog *this,
        const wchar_t *a2,
        struct CREElement *a3,
        struct tagRECT *a4,
        bool a5,
        int a6)
{
  LONG top; // edx
  LONG right; // ecx
  LONG bottom; // edx
  int v11; // eax
  int v12; // ecx
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  struct CREDialogResourceManager *v18; // eax
  double v19; // st6
  int v20; // edx
  double v21; // st4
  double v22; // st3
  double v23; // st3
  int v24; // ecx
  double v25; // st7
  int v26; // eax
  int v27; // esi
  struct CREDialogResourceManager *v28; // eax
  int v29; // eax
  int v30; // [esp+4h] [ebp-88h]
  int v31; // [esp+8h] [ebp-84h]
  float v32; // [esp+1Ch] [ebp-70h]
  float v33; // [esp+20h] [ebp-6Ch]
  int v34; // [esp+20h] [ebp-6Ch]
  float v35; // [esp+2Ch] [ebp-60h]
  float v36; // [esp+30h] [ebp-5Ch]
  float v37; // [esp+34h] [ebp-58h]
  float v38; // [esp+38h] [ebp-54h]
  float v39; // [esp+38h] [ebp-54h]
  struct tagRECT rc; // [esp+3Ch] [ebp-50h] BYREF
  _BYTE v41[64]; // [esp+4Ch] [ebp-40h] BYREF

  if ( 0.0 == *((float *)a3 + 48) )
    return 0;
  top = a4->top;
  rc.left = a4->left;
  right = a4->right;
  rc.top = top;
  bottom = a4->bottom;
  v11 = *((_DWORD *)this + 174);
  rc.right = right;
  v12 = *((_DWORD *)this + 173);
  rc.bottom = bottom;
  OffsetRect(&rc, v12, v11);
  if ( *((_BYTE *)this + 176) )
    OffsetRect(&rc, 0, *((_DWORD *)this + 177));
  if ( *((_BYTE *)GUISystem::Instance() + 45) )
  {
    v13 = RenderDevice::Instance();
    v32 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v13 + 296))(v13) * 0.0009765625;
    v14 = RenderDevice::Instance();
    v33 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v14 + 300))(v14) / 768.0;
  }
  else
  {
    v33 = 1.0;
    v32 = 1.0;
  }
  v15 = *((_DWORD *)a3 + 1);
  if ( REGetGlobalDialogResourceManager() )
  {
    v17 = *(_DWORD *)(*((_DWORD *)this + 188) + 4 * v15);
    v16 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v17);
  }
  else
  {
    v16 = 0;
  }
  D3DXMatrixScaling(v41, LODWORD(v32), LODWORD(v33), 1.0);
  v18 = REGetGlobalDialogResourceManager();
  (*(void (__stdcall **)(_DWORD, _BYTE *))(**((_DWORD **)v18 + 1) + 20))(*((_DWORD *)v18 + 1), v41);
  v35 = *((float *)a3 + 45);
  v36 = *((float *)a3 + 46);
  v37 = *((float *)a3 + 47);
  v38 = *((float *)a3 + 48);
  v39 = *((float *)GUISystem::Instance() + 12) * *((float *)this + 23) * v38;
  if ( v35 < 1.0 )
  {
    if ( v35 > 0.0 )
      v20 = (__int64)(v35 * 255.0 + 0.5);
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
  v22 = v36;
  if ( v36 < 1.0 )
  {
    if ( v22 > v21 )
      v34 = (__int64)(v22 * 255.0 + v19);
    else
      v34 = 0;
  }
  else
  {
    v34 = 255;
  }
  v23 = v37;
  if ( v37 < 1.0 )
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
  v25 = v39;
  if ( v39 < 1.0 )
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
  v27 = **(_DWORD **)(v16 + 520);
  v31 = v24 | ((v34 | ((v20 | (v26 << 8)) << 8)) << 8);
  v30 = *((_DWORD *)a3 + 2);
  v28 = REGetGlobalDialogResourceManager();
  v29 = (*(int (__stdcall **)(_DWORD, _DWORD, const wchar_t *, int, struct tagRECT *, int, int))(v27 + 60))(
          *(_DWORD *)(v16 + 520),
          *((_DWORD *)v28 + 1),
          a2,
          a6,
          &rc,
          v30,
          v31);
  return v29 >= 0 ? 0 : v29;
}
