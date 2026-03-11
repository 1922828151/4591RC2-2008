/*
 * func-name: ?UpdateTransform@AdapterActor@GameClient@@UAEXABVMatrix@@@Z_0
 * func-address: 0x100f2c60
 * callers: 0x10019817
 * callees: 0x102c23d0
 */

void __thiscall GameClient::AdapterActor::UpdateTransform(GameClient::AdapterActor *this, const struct Matrix *a2)
{
  int v3; // ecx
  int v4; // ebx
  _BYTE v5[64]; // [esp+4h] [ebp-40h] BYREF

  if ( *((_DWORD *)this + 179) )
  {
    *((_DWORD *)this + 214) = *((_DWORD *)a2 + 12);
    *((_DWORD *)this + 215) = *((_DWORD *)a2 + 13);
    *((_DWORD *)this + 216) = *((_DWORD *)a2 + 14);
    qmemcpy((char *)this + 868, (const void *)sub_102C23D0(v5), 0x40u);
    qmemcpy((void *)(*((_DWORD *)this + 179) + 224), a2, 0x40u);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 179) + 20))(*((_DWORD *)this + 179));
    v3 = *((_DWORD *)this + 313);
    if ( v3 )
      (*(void (__thiscall **)(int, const struct Matrix *))(*(_DWORD *)v3 + 136))(v3, a2);
    v4 = *((_DWORD *)this + 314);
    if ( v4 )
      (*(void (__thiscall **)(int, const struct Matrix *))(*(_DWORD *)v4 + 136))(v4, a2);
  }
}
