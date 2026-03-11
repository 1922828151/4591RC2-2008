/*
 * func-name: sub_10078420
 * func-address: 0x10078420
 * callers: 0x1003d0f0, 0x1007d280, 0x10082810, 0x10085e90, 0x10086a00, 0x1009e6e0, 0x1009f940, 0x1015d190
 * callees: 0x10077c20, 0x100977a0
 */

void __userpurge sub_10078420(int a1@<ecx>, int a2@<edi>, int a3)
{
  int (__thiscall *v3)(int); // edx
  int v4; // eax
  char v5; // bl
  int v6; // edi
  int v7; // ebp
  int v8; // eax
  int (__stdcall *v9)(int, int, int); // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp+4h] [ebp-30h]
  int v16; // [esp+10h] [ebp-24h]
  int v17[4]; // [esp+20h] [ebp-14h] BYREF
  int v18; // [esp+30h] [ebp-4h]

  v3 = *(int (__thiscall **)(int))(*(_DWORD *)a3 + 4);
  v18 = a1;
  if ( v3(a3) )
  {
    v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a2);
    (*(void (**)(void))(*(_DWORD *)v16 + 60))();
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
    (*(void (**)(void))(*(_DWORD *)v15 + 68))();
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 36))(v4) & 1;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
    v9 = *(int (__stdcall **)(int, int, int))(*(_DWORD *)v6 + 16);
    v17[1] = v8;
    v10 = v9(v6, a3 + 2460, a3);
    v11 = (*(int (__stdcall **)(int, int))(*(_DWORD *)v7 + 20))(v7, 3 * v10);
    v12 = (*(int (__stdcall **)(int, int, int))(*(_DWORD *)v18 + 32))(v18, 2 * (v5 != 0) + 2, v11);
    sub_10077C20(v18, (_DWORD *)v17[3], v17[2], v12, v15, 16, (int)v17, v16, 16);
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 64))(v13);
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
    (*(void (__stdcall **)(int))(*(_DWORD *)v14 + 72))(v14);
  }
  else
  {
    SeriousWarning("No mesh to build collision info from. FIXME: Load directly");
  }
}
