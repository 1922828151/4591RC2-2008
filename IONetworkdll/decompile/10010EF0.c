/*
 * func-name: ?send@Stream_Channel@IONetwork@Outpop@@UAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@W4EPriority@Utility@3@W4ESequenceType@73@_N@Z
 * func-address: 0x10010ef0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::IONetwork::Stream_Channel::send(void *this, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  Outpop::Utility::Stream_Base **v6; // esi
  bool v7; // cc
  Outpop::Utility::Stream_Base **v8; // ebx
  Outpop::Utility::Binary_Stream *v9; // esi
  Outpop::Utility::Ref_Object *v10; // ecx
  Outpop::Utility::Stream_Base **v11; // esi
  Outpop::Utility::Stream_Base **v12; // ebx
  Outpop::Utility::Stream_Base *v13; // edi
  const char *ptr; // eax
  Outpop::Utility::Ref_Object **v15; // edi
  Outpop::Utility::Ref_Object *v16; // ecx
  bool v17; // zf
  int v18; // [esp+0h] [ebp-34h]
  Outpop::Utility::Ref_Object *v19; // [esp+14h] [ebp-20h] BYREF
  Outpop::Utility::Ref_Object *v20; // [esp+18h] [ebp-1Ch] BYREF
  void *v21; // [esp+1Ch] [ebp-18h]
  Outpop::Utility::Binary_Stream *v22; // [esp+20h] [ebp-14h]
  int v23; // [esp+30h] [ebp-4h]

  v21 = this;
  v5 = a2;
  v6 = *(Outpop::Utility::Stream_Base ***)(a2 + 4);
  v7 = (unsigned int)v6 <= *(_DWORD *)(a2 + 8);
  v20 = 0;
  if ( !v7 )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v8 = *(Outpop::Utility::Stream_Base ***)(a2 + 8);
    if ( *(_DWORD *)(a2 + 4) > (unsigned int)v8 )
      invalid_parameter_noinfo();
    if ( v6 == v8 )
      break;
    if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    v20 = (Outpop::Utility::Ref_Object *)((char *)v20 + Outpop::Utility::Stream_Base::get_totallength(*v6));
    if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    ++v6;
  }
  v9 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v22 = v9;
  v23 = 0;
  if ( v9 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v9, (char *)v20 + 64);
    *(_DWORD *)v9 = &Outpop::Utility::Binary_Stream::`vftable';
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  v23 = -1;
  v19 = v10;
  if ( v10 )
    Outpop::Utility::Ref_Object::addref(v10);
  v23 = 1;
  Outpop::Utility::Binary_Stream::priority(v19, a3);
  Outpop::Utility::Binary_Stream::sequence(v19, a4);
  v11 = *(Outpop::Utility::Stream_Base ***)(a2 + 4);
  if ( (unsigned int)v11 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v12 = *(Outpop::Utility::Stream_Base ***)(v5 + 8);
    if ( *(_DWORD *)(v5 + 4) > (unsigned int)v12 )
      invalid_parameter_noinfo();
    if ( v11 == v12 )
      break;
    if ( (unsigned int)v11 >= *(_DWORD *)(v5 + 8) )
      invalid_parameter_noinfo();
    if ( *v11 )
    {
      do
      {
        v13 = *v11;
        Outpop::Utility::Stream_Base::get_readable(*v11);
        ptr = Outpop::Utility::Stream_Base::get_read_ptr(v13);
        Outpop::Utility::Stream_Base::write(v19, ptr, v18);
        v15 = (Outpop::Utility::Ref_Object **)Outpop::Utility::Binary_Stream::cont(*v11, &v20);
        LOBYTE(v23) = 2;
        if ( *v11 )
          Outpop::Utility::Ref_Object::release(*v11);
        v16 = *v15;
        v17 = *v15 == 0;
        *v11 = *v15;
        if ( !v17 )
          Outpop::Utility::Ref_Object::addref(v16);
        LOBYTE(v23) = 1;
        if ( v20 )
          Outpop::Utility::Ref_Object::release(v20);
      }
      while ( *v11 );
      v5 = a2;
    }
    if ( (unsigned int)v11 >= *(_DWORD *)(v5 + 8) )
      invalid_parameter_noinfo();
    ++v11;
  }
  (*(void (__thiscall **)(void *, Outpop::Utility::Ref_Object **))(*(_DWORD *)v21 + 20))(v21, &v19);
  v23 = -1;
  if ( v19 )
    Outpop::Utility::Ref_Object::release(v19);
}
