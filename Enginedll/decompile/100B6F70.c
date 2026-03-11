/*
 * func-name: ?DrawTextFromTexture@CREDialog@@QAEJPB_WPAVCREElement@@PAUtagRECT@@_NH@Z
 * func-address: 0x100b6f70
 * callers: 0x100c14d0, 0x100c33b0
 * callees: 0x100b5280, 0x100b6bc0, 0x101189f0, 0x1016c6e0, 0x1016c920
 */

int __userpurge CREDialog::DrawTextFromTexture@<eax>(
        CREDialog *this@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        const wchar_t *a4,
        struct CREElement *a5,
        struct tagRECT *a6,
        bool a7,
        int a8)
{
  int v10; // edi
  int v11; // edi
  int v12; // edi
  LONG right; // ebx
  LONG left; // ebp
  LONG bottom; // eax
  int v16; // edi
  int v17; // ebx
  struct RenderDevice *v18; // eax
  struct RenderDevice *v19; // eax
  int v20; // ebx
  struct RenderDevice *v21; // eax
  int v22; // ebp
  struct RenderDevice *v23; // eax
  struct RenderDevice *v24; // eax
  struct RenderDevice *v25; // eax
  double v26; // st4
  double v27; // st7
  int v28; // edx
  int v29; // ecx
  double v30; // rtt
  double v31; // st4
  double v32; // st7
  double v33; // rt0
  int v34; // eax
  int v35; // esi
  struct RenderDevice *v36; // eax
  struct RenderDevice *v37; // eax
  struct RenderDevice *v38; // eax
  struct Texture *v41; // [esp+44h] [ebp-60h] BYREF
  CREDialog *v42; // [esp+48h] [ebp-5Ch]
  int dy; // [esp+50h] [ebp-54h]
  __int64 v44; // [esp+54h] [ebp-50h]
  struct tagRECT rc; // [esp+5Ch] [ebp-48h] BYREF
  LONG v46; // [esp+6Ch] [ebp-38h]
  LONG top; // [esp+70h] [ebp-34h]
  struct tagRECT v48; // [esp+74h] [ebp-30h] BYREF
  int v49; // [esp+A0h] [ebp-4h]
  int v50; // [esp+B8h] [ebp+14h]

  if ( 0.0 == *((float *)a5 + 48) )
    return 0;
  v10 = *((_DWORD *)a5 + 1);
  if ( !REGetGlobalDialogResourceManager() )
    return 0;
  v11 = *(_DWORD *)(*((_DWORD *)this + 188) + 4 * v10);
  v12 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v11);
  if ( !v12 )
    return 0;
  right = a6->right;
  left = a6->left;
  bottom = a6->bottom;
  dy = a6->top;
  HIDWORD(v44) = bottom;
  if ( REGetGlobalDialogResourceManager() )
    REGetGlobalDialogResourceManager();
  std::wstring::wstring(&v48.right, a4);
  v49 = 0;
  sub_1016C920();
  v16 = sub_1016C6E0(&v48.right, v12, (int)&v41);
  v49 = -1;
  std::wstring::~wstring(&v48.right);
  if ( !v16 )
    return 0;
  SetRect(&rc, 0, 0, *(_DWORD *)(v16 + 80), *(_DWORD *)(v16 + 84));
  top = rc.top;
  v48.left = rc.right;
  v46 = rc.left;
  v48.top = rc.bottom;
  OffsetRect(&rc, left, dy);
  if ( (*((_BYTE *)a5 + 8) & 1) != 0 )
    OffsetRect(&rc, (right - (int)v41 - left) / 2, 0);
  if ( (*((_BYTE *)a5 + 8) & 2) != 0 )
    OffsetRect(&rc, right - (_DWORD)v41 - left, 0);
  v17 = HIDWORD(v44);
  if ( (*((_BYTE *)a5 + 8) & 4) != 0 )
    OffsetRect(&rc, 0, (HIDWORD(v44) - (int)v42 - dy) / 2);
  if ( (*((_BYTE *)a5 + 8) & 8) != 0 )
    OffsetRect(&rc, 0, v17 - (_DWORD)v42 - dy);
  v18 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int, int))(*(_DWORD *)v18 + 452))(v18, 0, 7, a2, a3);
  v19 = RenderDevice::Instance();
  v20 = (*(int (__thiscall **)(struct RenderDevice *, _DWORD, int))(*(_DWORD *)v19 + 452))(v19, 0, 5);
  v21 = RenderDevice::Instance();
  v22 = (*(int (__thiscall **)(struct RenderDevice *, _DWORD, int))(*(_DWORD *)v21 + 452))(v21, 0, 6);
  v23 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v23 + 448))(v23, 0, 7, 0);
  v24 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v24 + 448))(v24, 0, 5, 3);
  v25 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v25 + 448))(v25, 0, 6, 3);
  if ( *((float *)a5 + 45) < 1.0 )
  {
    if ( *((float *)a5 + 45) > 0.0 )
    {
      v44 = (__int64)(*((float *)a5 + 45) * 255.0 + 0.5);
      v50 = v44;
    }
    else
    {
      v50 = 0;
    }
  }
  else
  {
    v50 = 255;
  }
  v26 = 1.0;
  v27 = 0.0;
  if ( *((float *)a5 + 46) < 1.0 )
  {
    if ( *((float *)a5 + 46) > 0.0 )
    {
      v44 = (__int64)(*((float *)a5 + 46) * 255.0 + 0.5);
      v28 = v44;
    }
    else
    {
      v28 = 0;
    }
    v26 = 1.0;
    v27 = 0.0;
  }
  else
  {
    v28 = 255;
  }
  if ( v26 > *((float *)a5 + 47) )
  {
    v30 = v26;
    v31 = v27;
    v32 = v30;
    if ( v31 < *((float *)a5 + 47) )
    {
      v44 = (__int64)(*((float *)a5 + 47) * 255.0 + 0.5);
      v29 = v44;
    }
    else
    {
      v29 = 0;
    }
    v33 = v31;
    v26 = v32;
    v27 = v33;
  }
  else
  {
    v29 = 255;
  }
  if ( v26 > *((float *)a5 + 48) )
  {
    if ( v27 < *((float *)a5 + 48) )
    {
      v44 = (__int64)(255.0 * *((float *)a5 + 48) + 0.5);
      v34 = v44;
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
  v35 = CREDialog::DrawTextTexture(
          v42,
          v41,
          &v48,
          (struct tagRECT *)&rc.right,
          v29 | ((v28 | ((v50 | (v34 << 8)) << 8)) << 8));
  v36 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v36 + 448))(v36, 0);
  v37 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v37 + 448))(v37, 0, 5, v20);
  v38 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v38 + 448))(v38, 0, 6, v22);
  return v35 >= 0 ? 0 : v35;
}
