/*
 * func-name: ?Shutdown@NxPhysics@@QAEXXZ
 * func-address: 0x101459a0
 * callers: 0x10096550
 * callees: 0x10144030, 0x10146620, 0x101a2500, 0x101a253a
 */

void __thiscall NxPhysics::Shutdown(NxPhysics *this)
{
  _DWORD *v2; // eax
  void *v3; // edi

  v2 = (_DWORD *)*((_DWORD *)this + 4);
  if ( v2 )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v2 + 16))(*v2);
    v3 = (void *)*((_DWORD *)this + 4);
    if ( v3 )
    {
      sub_10146620(*((_DWORD *)this + 4));
      operator delete(v3);
      *((_DWORD *)this + 4) = 0;
    }
  }
  if ( *((_DWORD *)this + 2) )
  {
    NxPhysics::FlushScene(this);
    if ( *((_DWORD *)this + 3) )
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 2) + 20))(
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 3));
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 2) + 4))(*((_DWORD *)this + 2));
  }
  NxCloseCooking();
  operator delete[](dword_11241C20);
  operator delete[](dword_11241C24);
}
