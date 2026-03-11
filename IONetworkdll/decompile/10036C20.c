/*
 * func-name: ?connect@Dgram_Connector@IONetwork@Outpop@@UAEHAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10036c20
 * callers: none
 * callees: 0x10003890, 0x10008c40, 0x10008ca0, 0x10018600, 0x1002b630, 0x10038d30, 0x10039b80, 0x1003a350, 0x1003ade0, 0x1003be30, 0x10040dc0, 0x10041850, 0x1004e861, 0x1004e98e
 */

int __thiscall Outpop::IONetwork::Dgram_Connector::connect(int this, Outpop::Utility::Ref_Object **a2)
{
  int (__thiscall *v3)(int); // edx
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  Outpop::Utility::Ref_Object *v8; // eax
  Outpop::Utility::Ref_Object *v9; // edi
  bool v10; // al
  int v11; // edx
  _DWORD *v12; // eax
  void (__thiscall *v13)(Outpop::Utility::Thread_Mutex *__hidden); // ebx
  Outpop::Utility::Ref_Object *v14; // ecx
  Outpop::Utility::Ref_Object *v15; // ecx
  bool v16; // zf
  int (__thiscall *v17)(int); // eax
  _DWORD *v18; // edi
  _DWORD *v19; // eax
  _DWORD *v20; // edi
  _DWORD *v21; // eax
  Outpop::Utility::Ref_Object *v22; // eax
  bool v23; // al
  int v24; // eax
  int v25; // edx
  _DWORD *v26; // eax
  Outpop::Utility::Ref_Object *v27; // ecx
  Outpop::Utility::Ref_Object *v28; // ecx
  bool v29; // al
  Outpop::Utility::Ref_Object *v31; // [esp+18h] [ebp-8Ch] BYREF
  int v32; // [esp+1Ch] [ebp-88h] BYREF
  int v33; // [esp+20h] [ebp-84h]
  _BYTE v34[16]; // [esp+2Ch] [ebp-78h] BYREF
  _DWORD v35[4]; // [esp+3Ch] [ebp-68h] BYREF
  int v36; // [esp+4Ch] [ebp-58h] BYREF
  _DWORD v37[7]; // [esp+50h] [ebp-54h] BYREF
  _DWORD v38[9]; // [esp+6Ch] [ebp-38h] BYREF
  int v39; // [esp+A0h] [ebp-4h]

  if ( *(_BYTE *)(this + 84) )
  {
    Outpop::IONetwork::Bluid_Pakcet::Bluid_Pakcet((Outpop::IONetwork::Bluid_Pakcet *)&v36);
    v39 = 0;
    v3 = *(int (__thiscall **)(int))(*(_DWORD *)(this + 124) + 16);
    v36 = -1;
    v4 = (_DWORD *)v3(this + 124);
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v38[0] + 16))(v38);
    *v5 = *v4;
    v5[1] = v4[1];
    v5[2] = v4[2];
    v5[3] = v4[3];
    v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 152) + 16))(this + 152);
    v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v37[0] + 16))(v37);
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v8 = (Outpop::Utility::Ref_Object *)operator new(72);
    v31 = v8;
    LOBYTE(v39) = 1;
    if ( v8 )
      v9 = (Outpop::Utility::Ref_Object *)Outpop::IONetwork::Dgram_Connect_Bluider_Process::Dgram_Connect_Bluider_Process(
                                            v8,
                                            (struct Outpop::IONetwork::INET_Addr *)(this + 124),
                                            (struct Outpop::IONetwork::Dgram_Connector *)this);
    else
      v9 = 0;
    LOBYTE(v39) = 0;
    v31 = v9;
    if ( v9 )
      Outpop::Utility::Ref_Object::addref(v9);
    LOBYTE(v39) = 2;
    v10 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 232));
    LOBYTE(v39) = 3;
    if ( v10 )
    {
      v32 = Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)(this + 124));
      v33 = v11;
      v12 = sub_1002B630(v35, &v32, &v31);
      LOBYTE(v39) = 4;
      sub_1003BE30(v34, v12);
      LOBYTE(v39) = 5;
      sub_10039B80(this + 256, &v32, v34);
      LOBYTE(v39) = 4;
      sub_10018600((int)v34);
      LOBYTE(v39) = 3;
      sub_10018600((int)v35);
      LOBYTE(v39) = 2;
      v13 = (void (__thiscall *)(Outpop::Utility::Thread_Mutex *__hidden))Outpop::Utility::Thread_Mutex::release;
      Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(this + 232));
      v14 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v9 + 17);
      if ( v14 )
        Outpop::Utility::Ref_Object::release(v14);
      v15 = *a2;
      v16 = *a2 == 0;
      *((_DWORD *)v9 + 17) = *a2;
      if ( !v16 )
        Outpop::Utility::Ref_Object::addref(v15);
      Outpop::IONetwork::Dgram_Connect_Bluider_Process::first_process(v9);
      LOBYTE(v39) = 0;
LABEL_25:
      if ( v9 )
        Outpop::Utility::Ref_Object::release(v9);
      v39 = -1;
      Outpop::IONetwork::Bluid_Pakcet::~Bluid_Pakcet((Outpop::IONetwork::Bluid_Pakcet *)&v36);
      v29 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 184));
      v39 = 12;
      if ( v29 )
      {
        if ( *(_BYTE *)(this + 388) )
        {
          Outpop::IONetwork::Dgram_Connector::asynch_receive((Outpop::IONetwork::Dgram_Connector *)this, 0);
          *(_BYTE *)(this + 388) = 0;
        }
        v39 = -1;
        v13((Outpop::Utility::Thread_Mutex *)(this + 184));
        return 0;
      }
      else
      {
        v39 = -1;
        return -1;
      }
    }
    LOBYTE(v39) = 0;
  }
  else
  {
    Outpop::IONetwork::Bluid_Pakcet::Bluid_Pakcet((Outpop::IONetwork::Bluid_Pakcet *)&v36);
    v39 = 6;
    v17 = *(int (__thiscall **)(int))(*(_DWORD *)(this + 124) + 16);
    v36 = -1;
    v18 = (_DWORD *)v17(this + 124);
    v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v38[0] + 16))(v38);
    *v19 = *v18;
    v19[1] = v18[1];
    v19[2] = v18[2];
    v19[3] = v18[3];
    v20 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 152) + 16))(this + 152);
    v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v37[0] + 16))(v37);
    *v21 = *v20;
    v21[1] = v20[1];
    v21[2] = v20[2];
    v21[3] = v20[3];
    v22 = (Outpop::Utility::Ref_Object *)operator new(108);
    v31 = v22;
    LOBYTE(v39) = 7;
    if ( v22 )
      v9 = (Outpop::Utility::Ref_Object *)sub_1003A350(v22, &v36, this, *(_DWORD *)(this + 12), *(_DWORD *)(this + 20));
    else
      v9 = 0;
    LOBYTE(v39) = 6;
    v31 = v9;
    if ( v9 )
      Outpop::Utility::Ref_Object::addref(v9);
    LOBYTE(v39) = 8;
    v23 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 232));
    LOBYTE(v39) = 9;
    if ( v23 )
    {
      v24 = Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)(this + 124));
      v33 = v25;
      v32 = v24;
      v26 = sub_1002B630(v35, &v32, &v31);
      LOBYTE(v39) = 10;
      sub_1003BE30(v34, v26);
      LOBYTE(v39) = 11;
      sub_10039B80(this + 336, &v32, v34);
      LOBYTE(v39) = 10;
      sub_10018600((int)v34);
      LOBYTE(v39) = 9;
      sub_10018600((int)v35);
      LOBYTE(v39) = 8;
      v13 = (void (__thiscall *)(Outpop::Utility::Thread_Mutex *__hidden))Outpop::Utility::Thread_Mutex::release;
      Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(this + 232));
      v27 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v9 + 26);
      if ( v27 )
        Outpop::Utility::Ref_Object::release(v27);
      v28 = *a2;
      v16 = *a2 == 0;
      *((_DWORD *)v9 + 26) = *a2;
      if ( !v16 )
        Outpop::Utility::Ref_Object::addref(v28);
      sub_1003ADE0();
      LOBYTE(v39) = 6;
      goto LABEL_25;
    }
    LOBYTE(v39) = 6;
  }
  if ( v9 )
    Outpop::Utility::Ref_Object::release(v9);
  v39 = -1;
  Outpop::IONetwork::Bluid_Pakcet::~Bluid_Pakcet((Outpop::IONetwork::Bluid_Pakcet *)&v36);
  return -1;
}
