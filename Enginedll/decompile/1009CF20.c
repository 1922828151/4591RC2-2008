/*
 * func-name: sub_1009CF20
 * func-address: 0x1009cf20
 * callers: 0x1009d640
 * callees: 0x100956d0
 */

int __cdecl sub_1009CF20(_DWORD *a1, int a2)
{
  int v2; // ebp
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // ebx
  _DWORD *v7; // ecx
  _DWORD *v8; // eax
  int v9; // edx
  int v11; // [esp+20h] [ebp-2Ch]
  _DWORD v12[2]; // [esp+24h] [ebp-28h] BYREF
  _BYTE v13[24]; // [esp+2Ch] [ebp-20h] BYREF
  int v14; // [esp+44h] [ebp-8h]
  int v15; // [esp+48h] [ebp-4h]

  v2 = a2;
  (*(void (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)a2 + 76))(a2, 0, v12, 0, 0);
  v3 = (_DWORD *)v12[1];
  (*(void (__stdcall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v2 + 68))(v2, 0, v13);
  v4 = v15;
  if ( v15 != 256 )
  {
    Error("3D attenuation texture is not %dx%d", 256, 256);
    v4 = v15;
  }
  if ( v4 )
  {
    v5 = v14;
    v11 = v4;
    do
    {
      v7 = v3;
      if ( v5 )
      {
        v8 = a1;
        v9 = v5;
        do
        {
          *v8 = *v7++;
          v8 += 256;
          --v9;
        }
        while ( v9 );
        v2 = a2;
      }
      v3 = (_DWORD *)((char *)v3 + v12[0]);
      ++a1;
      --v11;
    }
    while ( v11 );
  }
  return (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v2 + 80))(v2, 0);
}
