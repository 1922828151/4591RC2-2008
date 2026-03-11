/*
 * func-name: sub_1001BC20
 * func-address: 0x1001bc20
 * callers: 0x1001a6c0
 * callees: 0x1001d450, 0x10029110
 */

Outpop::Utility::Ref_Object **__thiscall sub_1001BC20(_DWORD *this, Outpop::Utility::Ref_Object **a2, int a3)
{
  Outpop::Utility::Lock *v4; // ebx
  void *v5; // edx
  _DWORD *v6; // eax
  int v7; // esi
  Outpop::Utility::Ref_Object *v8; // ecx
  int v10; // [esp+20h] [ebp-1Ch] BYREF
  void *v11; // [esp+24h] [ebp-18h]
  int v12; // [esp+28h] [ebp-14h] BYREF
  void *v13; // [esp+2Ch] [ebp-10h]
  int v14; // [esp+38h] [ebp-4h]

  *a2 = 0;
  v4 = (Outpop::Utility::Lock *)(this + 1);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 1));
  v14 = 1;
  sub_10029110(&v10, &a3);
  v5 = (void *)this[25];
  v6 = this + 24;
  v7 = v10;
  v13 = v5;
  if ( !v10 || (_DWORD *)v10 != v6 )
    invalid_parameter_noinfo();
  if ( v11 != v13 )
  {
    if ( !v7 )
      invalid_parameter_noinfo();
    if ( v11 == *(void **)(v7 + 4) )
      invalid_parameter_noinfo();
    if ( *a2 )
      Outpop::Utility::Ref_Object::release(*a2);
    v8 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v11 + 3);
    *a2 = v8;
    if ( v8 )
      Outpop::Utility::Ref_Object::addref(v8);
    sub_1001D450((int)&v12, v7, v11);
  }
  LOBYTE(v14) = 0;
  Outpop::Utility::Lock::unlock(v4);
  return a2;
}
