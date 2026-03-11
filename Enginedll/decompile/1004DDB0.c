/*
 * func-name: ?SetTransform@Actor@@UAEXABVMatrix@@ABVVector@@@Z
 * func-address: 0x1004ddb0
 * callers: none
 * callees: 0x10100b70, 0x10100b90
 */

void __thiscall Actor::SetTransform(Actor *this, const struct Matrix *a2, const struct Vector *a3)
{
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-30h] BYREF
  _BYTE v10[36]; // [esp+1Ch] [ebp-24h] BYREF

  v4 = *((_DWORD *)this + 155);
  if ( v4 && (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v4 + 88))(v4) != 5 )
  {
    v5 = **((_DWORD **)this + 155);
    v6 = NxHelper::ToNxMat33(v10, a2);
    (*(void (__thiscall **)(_DWORD, int))(v5 + 28))(*((_DWORD *)this + 155), v6);
    v7 = **((_DWORD **)this + 155);
    v8 = NxHelper::ToNxVec3(v9, a3);
    (*(void (__thiscall **)(_DWORD, int))(v7 + 24))(*((_DWORD *)this + 155), v8);
  }
  qmemcpy((char *)this + 868, a2, 0x40u);
  *((_DWORD *)this + 214) = *(_DWORD *)a3;
  *((_DWORD *)this + 215) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 216) = *((_DWORD *)a3 + 2);
}
