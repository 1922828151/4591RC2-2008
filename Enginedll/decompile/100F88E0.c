/*
 * func-name: sub_100F88E0
 * func-address: 0x100f88e0
 * callers: none
 * callees: 0x10097800, 0x101189f0, 0x10178188, 0x1017eaef, 0x101a24ac
 */

int __cdecl sub_100F88E0(const char *a1, _DWORD *a2, unsigned int *a3, unsigned int *a4)
{
  struct RenderDevice *v4; // eax
  int v5; // eax
  const char *v6; // eax
  int v7; // ebx
  void (__stdcall *v8)(int, _DWORD, _BYTE *); // eax
  unsigned int v9; // eax
  void *v10; // eax
  unsigned int v11; // esi
  bool v12; // zf
  unsigned int v13; // edx
  unsigned int v14; // eax
  _BYTE *v15; // ecx
  int result; // eax
  int v17; // [esp+60h] [ebp-30h] BYREF
  int v18; // [esp+64h] [ebp-2Ch]
  int v19; // [esp+68h] [ebp-28h] BYREF
  int v20; // [esp+6Ch] [ebp-24h]
  _BYTE v21[24]; // [esp+70h] [ebp-20h] BYREF
  unsigned int v22; // [esp+88h] [ebp-8h]
  unsigned int v23; // [esp+8Ch] [ebp-4h]

  v4 = RenderDevice::Instance();
  v5 = D3DXCreateTextureFromFileExA(*((_DWORD *)v4 + 427), a1, -1, -1, -1, 0, 21, 2, -1, -1, 0, 0, 0, &v17);
  if ( v5 )
  {
    v6 = (const char *)sub_1017EAEF(v5);
    Warning("Couldn't create texture: %s (D3DErr: %s)", a1, v6);
  }
  (*(void (__stdcall **)(int, _DWORD, int *, _DWORD, _DWORD))(*(_DWORD *)v17 + 76))(v17, 0, &v19, 0, 0);
  v7 = v20;
  v8 = *(void (__stdcall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v17 + 68);
  v18 = v20;
  v8(v17, 0, v21);
  v9 = v23;
  *a3 = v22;
  *a4 = v9;
  v10 = operator new(v9 * *a3);
  v11 = 0;
  v12 = v23 == 0;
  *a2 = v10;
  if ( !v12 )
  {
    v13 = v22;
    do
    {
      v14 = 0;
      if ( v13 )
      {
        v15 = (_BYTE *)(v7 + 2);
        do
        {
          ++v14;
          *(_BYTE *)(*a2 + v11 * *a3 + v14 - 1) = *v15;
          v13 = v22;
          v15 += 4;
        }
        while ( v14 < v22 );
        v7 = v18;
      }
      v7 += v19;
      ++v11;
      v18 = v7;
    }
    while ( v11 < v23 );
  }
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v17 + 80))(v17, 0);
  result = v17;
  if ( v17 )
    return (*(int (__stdcall **)(int))(*(_DWORD *)v17 + 8))(v17);
  return result;
}
