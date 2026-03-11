/*
 * func-name: ?get_ack_stream@Dgram_Channel@IONetwork@Outpop@@AAEHAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x10032340
 * callers: 0x1002d330, 0x1002e210, 0x10031810
 * callees: 0x1000b220, 0x1003c480
 */

int __thiscall Outpop::IONetwork::Dgram_Channel::get_ack_stream(_DWORD *this, _DWORD *a2)
{
  Outpop::Utility::Thread_Mutex *v3; // edi
  int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  Outpop::Utility::Ref_Object *v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  int v13; // ebx
  unsigned int v14; // ebx
  Outpop::Utility::Ref_Object *v15; // ecx
  int v16; // edx
  Outpop::Utility::Ref_Object *v19; // [esp+10h] [ebp-2Ch] BYREF
  int v20; // [esp+14h] [ebp-28h]
  int v21; // [esp+18h] [ebp-24h]
  int v22; // [esp+1Ch] [ebp-20h]
  Outpop::Utility::Thread_Mutex *v23; // [esp+20h] [ebp-1Ch]
  int v24[3]; // [esp+24h] [ebp-18h] BYREF
  int v25; // [esp+38h] [ebp-4h]

  v3 = (Outpop::Utility::Thread_Mutex *)(this + 166);
  v23 = (Outpop::Utility::Thread_Mutex *)(this + 166);
  Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 166));
  v22 = this[165];
  v4 = v22;
  if ( v22 )
  {
    do
    {
      v5 = this[164];
      if ( v5 > v5 + this[165] )
        invalid_parameter_noinfo();
      v6 = this[164] + this[165];
      v7 = v5 & 3;
      v8 = v5 >> 2;
      v20 = v7;
      if ( v5 >= v6 )
      {
        invalid_parameter_noinfo();
        v7 = v20;
      }
      v9 = this[163];
      if ( v9 <= v8 )
        v8 -= v9;
      v10 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(this[162] + 4 * v8) + 4 * v7);
      v19 = v10;
      if ( v10 )
        Outpop::Utility::Ref_Object::addref(v10);
      v25 = 0;
      v11 = a2[1];
      if ( v11 )
        v12 = (int)(a2[2] - v11) >> 2;
      else
        v12 = 0;
      if ( v11 && v12 < (int)(a2[3] - v11) >> 2 )
      {
        v13 = a2[2];
        LOBYTE(v21) = 0;
        sub_1003C480(v13, 1);
        a2[2] = v13 + 4;
      }
      else
      {
        v14 = a2[2];
        if ( v11 > v14 )
          invalid_parameter_noinfo();
        sub_1000B220((int)a2, v24, (int)&v19, (int)a2, v14);
      }
      if ( this[165] )
      {
        v15 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(this[162] + 4 * (this[164] >> 2)) + 4 * (this[164] & 3));
        if ( v15 )
          Outpop::Utility::Ref_Object::release(v15);
        v16 = this[163];
        if ( (unsigned int)(4 * v16) <= ++this[164] )
          this[164] = 0;
        if ( this[165]-- == 1 )
          this[164] = 0;
      }
      v25 = -1;
      if ( v19 )
        Outpop::Utility::Ref_Object::release(v19);
    }
    while ( this[165] );
    v4 = v22;
    v3 = v23;
  }
  Outpop::Utility::Thread_Mutex::release(v3);
  return v4;
}
