/*
 * func-name: ?Textf@Canvas@@UAAXW4FONT_TYPE@@KMMPB_WZZ
 * func-address: 0x100652d0
 * callers: none
 * callees: 0x100971c0, 0x101189f0, 0x101a26c0
 */

int Canvas::Textf(int a1, int a2, unsigned int a3, float a4, float a5, wchar_t *Format, ...)
{
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  unsigned int v9; // edx
  int v10; // ebx
  int v11; // ebp
  int v12; // esi
  char v14; // [esp+37h] [ebp-829h] BYREF
  unsigned int v15; // [esp+38h] [ebp-828h]
  int *v16; // [esp+3Ch] [ebp-824h] BYREF
  __int64 v17; // [esp+40h] [ebp-820h]
  int v18; // [esp+48h] [ebp-818h] BYREF
  int v19; // [esp+4Ch] [ebp-814h] BYREF
  struct tagRECT rc; // [esp+50h] [ebp-810h] BYREF
  wchar_t Buffer[1024]; // [esp+60h] [ebp-800h] BYREF
  float v22; // [esp+870h] [ebp+10h]
  float v23; // [esp+874h] [ebp+14h]
  va_list ArgList; // [esp+87Ch] [ebp+1Ch] BYREF

  va_start(ArgList, Format);
  Engine::Instance();
  v22 = *(float *)(a1 + 52) * a4;
  v23 = *(float *)(a1 + 56) * a5;
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v6 + 432))(v6, 27, 1);
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v7 + 432))(v7, 19, 3);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v8 + 432))(v8, 20, 4);
  vswprintf_c_l(Buffer, 0x400u, Format, 0, ArgList);
  (*(void (__thiscall **)(int, int, int **, char *, int *, int *))(*(_DWORD *)a1 + 20))(a1, a2, &v16, &v14, &v19, &v18);
  if ( v14 )
  {
    SetRect(&rc, (int)((double)v19 + v22), (int)((double)v18 + v23), 0, 0);
    v9 = *(_DWORD *)(a1 + 72);
    v10 = *v16;
    v15 = HIBYTE(v9);
    LODWORD(v17) = HIBYTE(a3);
    v11 = *(unsigned __int8 *)(a1 + 74);
    v12 = *(unsigned __int8 *)(a1 + 73);
    v17 = (__int64)((double)HIBYTE(v9) * (double)HIBYTE(a3) / 255.0);
    (*(void (__stdcall **)(wchar_t *, struct tagRECT *, int, _DWORD))(v10 + 16))(
      Buffer,
      &rc,
      (unsigned __int8)v9 | ((v12 | ((v11 | ((_DWORD)v17 << 8)) << 8)) << 8),
      0);
  }
  SetRect(&rc, (int)v22, (int)v23, 0, 0);
  return (*(int (__thiscall **)(int *, wchar_t *, struct tagRECT *, unsigned int, _DWORD))(*v16 + 16))(
           v16,
           Buffer,
           &rc,
           a3,
           0);
}
