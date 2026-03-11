/*
 * func-name: ?DoLines@Gizmo@@IAEXPAUID3DXLine@@@Z
 * func-address: 0x10092310
 * callers: 0x10094d10
 * callees: none
 */

void __thiscall Gizmo::DoLines(Gizmo *this, struct ID3DXLine *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ebp
  int v6; // ebx
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  _DWORD v15[2]; // [esp+20h] [ebp-10h] BYREF
  int v16; // [esp+28h] [ebp-8h]
  int v17; // [esp+2Ch] [ebp-4h]

  v3 = *((_DWORD *)this + 233);
  v4 = -65536;
  v5 = -16711936;
  v6 = -16776961;
  if ( (v3 & 2) != 0 )
    v4 = -256;
  if ( (v3 & 4) != 0 )
    v5 = -256;
  if ( (v3 & 8) != 0 )
    v6 = -256;
  v7 = *((_DWORD *)this + 10);
  v15[0] = *((_DWORD *)this + 9);
  v8 = *(_DWORD *)this;
  v15[1] = v7;
  v9 = *((_DWORD *)this + 1);
  v16 = v8;
  v10 = *(_DWORD *)a2;
  v17 = v9;
  (*(void (__stdcall **)(struct ID3DXLine *, _DWORD *, int, int))(v10 + 20))(a2, v15, 2, v4);
  v11 = *((_DWORD *)this + 4);
  v12 = *(_DWORD *)a2;
  v16 = *((_DWORD *)this + 3);
  v17 = v11;
  (*(void (__stdcall **)(struct ID3DXLine *, _DWORD *, int, int))(v12 + 20))(a2, v15, 2, v5);
  v13 = *((_DWORD *)this + 7);
  v14 = *(_DWORD *)a2;
  v16 = *((_DWORD *)this + 6);
  v17 = v13;
  (*(void (__stdcall **)(struct ID3DXLine *, _DWORD *, int, int))(v14 + 20))(a2, v15, 2, v6);
}
