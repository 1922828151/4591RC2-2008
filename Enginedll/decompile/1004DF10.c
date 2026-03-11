/*
 * func-name: ?SetTransformation@Prefab@@QAEXAAVMatrix@@@Z
 * func-address: 0x1004df10
 * callers: none
 * callees: 0x1004d200, 0x1005f1c0, 0x100ee930, 0x10100c20, 0x101046b0, 0x10179840, 0x1017a0b0
 */

void __userpurge Prefab::SetTransformation(
        Prefab *this@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        struct Matrix *a5)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v7; // ecx
  int (__thiscall *v8)(Prefab *, int, int, int); // eax
  int v9; // eax
  float *WorldBBox; // eax
  int v11; // eax
  int *v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // eax
  _BYTE v16[12]; // [esp+18h] [ebp-A4h] BYREF
  float v17[4]; // [esp+24h] [ebp-98h] BYREF
  _BYTE v18[12]; // [esp+34h] [ebp-88h] BYREF
  _BYTE v19[12]; // [esp+40h] [ebp-7Ch] BYREF
  _BYTE v20[36]; // [esp+4Ch] [ebp-70h] BYREF
  _BYTE v21[64]; // [esp+70h] [ebp-4Ch] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v22; // [esp+B0h] [ebp-Ch]
  void *v23; // [esp+B4h] [ebp-8h]
  int v24; // [esp+B8h] [ebp-4h]

  v24 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v23 = &loc_101A8B58;
  v22 = ExceptionList;
  *((_DWORD *)this + 214) = *((_DWORD *)a5 + 12);
  *((_DWORD *)this + 215) = *((_DWORD *)a5 + 13);
  *((_DWORD *)this + 216) = *((_DWORD *)a5 + 14);
  qmemcpy((char *)this + 868, (const void *)sub_10179840(v21), 0x40u);
  v7 = *((_DWORD *)this + 179);
  if ( v7 )
  {
    (*(void (__thiscall **)(int, char *, char *))(*(_DWORD *)v7 + 28))(v7, (char *)this + 868, (char *)this + 856);
    if ( *((_DWORD *)this + 157) != -1 )
    {
      StaticModel::GetWorldBBox(*((_DWORD *)this + 179), v16);
      v8 = *(int (__thiscall **)(Prefab *, int, int, int))(*(_DWORD *)this + 88);
      v24 = 0;
      v9 = v8(this, a3, a4, a2);
      if ( v9 != *((_DWORD *)this + 179) )
      {
        WorldBBox = (float *)StaticModel::GetWorldBBox(v9, v20);
        sub_1004D200(v17, WorldBBox);
        sub_1017A0B0(v20);
      }
      v11 = sub_1005F1C0();
      (*(void (__thiscall **)(int, _DWORD, _BYTE *, _BYTE *))(*(_DWORD *)v11 + 28))(
        v11,
        *((unsigned __int16 *)this + 314),
        v18,
        v19);
      v12 = (int *)*((_DWORD *)this + 155);
      if ( v12 )
      {
        v13 = *v12;
        v14 = NxHelper::ToNxMat34(v19, a5);
        (*(void (__thiscall **)(_DWORD, int))(v13 + 20))(*((_DWORD *)this + 155), v14);
      }
      v24 = -1;
      sub_1017A0B0(v16);
    }
    v15 = *((_DWORD *)this + 178);
    if ( v15 )
    {
      if ( *(_DWORD *)(v15 + 756) )
        sub_101046B0(this);
    }
  }
}
