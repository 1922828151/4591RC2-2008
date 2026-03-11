/*
 * func-name: ?TextCenteredf@Canvas@@UAAXW4FONT_TYPE@@KHHHHPB_WZZ
 * func-address: 0x100656a0
 * callers: none
 * callees: 0x100971c0, 0x101189f0, 0x101a26c0
 */

int Canvas::TextCenteredf(int a1, int a2, unsigned int a3, int a4, int a5, int a6, int yBottom, wchar_t *Format, ...)
{
  int v8; // edi
  int v9; // ebx
  int v10; // ebp
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  unsigned int v14; // edx
  int v15; // ebp
  int v16; // ecx
  char v18; // [esp+37h] [ebp-829h] BYREF
  unsigned int v19; // [esp+38h] [ebp-828h]
  int *v20; // [esp+3Ch] [ebp-824h] BYREF
  __int64 v21; // [esp+40h] [ebp-820h]
  int v22; // [esp+48h] [ebp-818h] BYREF
  int v23; // [esp+4Ch] [ebp-814h] BYREF
  struct tagRECT rc; // [esp+50h] [ebp-810h] BYREF
  wchar_t Buffer[1024]; // [esp+60h] [ebp-800h] BYREF
  int v26; // [esp+878h] [ebp+18h]
  int yBottoma; // [esp+87Ch] [ebp+1Ch]
  va_list ArgList; // [esp+884h] [ebp+24h] BYREF

  va_start(ArgList, Format);
  Engine::Instance();
  v8 = (int)((double)a4 * *(float *)(a1 + 52));
  v9 = (int)((double)a5 * *(float *)(a1 + 56));
  v10 = (int)((double)a6 * *(float *)(a1 + 52));
  v26 = v10;
  yBottoma = (int)((double)yBottom * *(float *)(a1 + 56));
  v11 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v11 + 432))(v11, 27, 1);
  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v12 + 432))(v12, 19, 3);
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v13 + 432))(v13, 20, 4);
  vswprintf_c_l(Buffer, 0x400u, Format, 0, ArgList);
  (*(void (__thiscall **)(int, int, int **, char *, int *, int *))(*(_DWORD *)a1 + 20))(a1, a2, &v20, &v18, &v23, &v22);
  if ( v18 )
  {
    SetRect(&rc, v8 + v23, v9 + v22, v23 + v10, v22 + yBottoma);
    v14 = *(_DWORD *)(a1 + 72);
    v15 = *v20;
    v19 = HIBYTE(v14);
    LODWORD(v21) = HIBYTE(a3);
    v16 = *(unsigned __int8 *)(a1 + 74);
    v21 = (__int64)((double)HIBYTE(v14) * (double)HIBYTE(a3) / 255.0);
    (*(void (__thiscall **)(int *, wchar_t *, struct tagRECT *, int, int))(v15 + 16))(
      v20,
      Buffer,
      &rc,
      (unsigned __int8)v14 | ((*(unsigned __int8 *)(a1 + 73) | ((v16 | ((_DWORD)v21 << 8)) << 8)) << 8),
      1);
    v10 = v26;
  }
  SetRect(&rc, v8, v9, v10, yBottoma);
  return (*(int (__thiscall **)(int *, wchar_t *, struct tagRECT *, unsigned int, int))(*v20 + 16))(
           v20,
           Buffer,
           &rc,
           a3,
           1);
}
