/*
 * func-name: ?SetModelRotation@C3DModel@@QAEXM@Z
 * func-address: 0x100b2990
 * callers: none
 * callees: 0x1000bc40, 0x10178840
 */

void __thiscall C3DModel::SetModelRotation(C3DModel *this, float a2)
{
  float v3[16]; // [esp+8h] [ebp-40h] BYREF

  if ( *((_DWORD *)this + 270) )
  {
    sub_1000BC40(v3);
    sub_10178840(a2);
    (*(void (__stdcall **)(float *, int))(**((_DWORD **)this + 270) + 32))(v3, *((_DWORD *)this + 270) + 856);
    if ( *((_BYTE *)this + 1057) )
      *((float *)this + 269) = a2;
  }
}
