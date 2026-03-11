/*
 * func-name: ?SendMessageA@ChatManager@GameClient@@QAEXPAVLocalCharacter@2@W4CHANNEL_TYPE@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x101f3e70
 * callers: 0x1000e3ae
 * callees: 0x1000194c, 0x10002842, 0x1000326a, 0x10003bf2, 0x10004101, 0x1000432c, 0x100047af, 0x100077ed, 0x10008e72, 0x1000902a, 0x1000a3a8, 0x1000a830, 0x1000b7e4, 0x1000bcd5, 0x1000d51c, 0x1000da53, 0x1000e56b, 0x1000ed13, 0x100128f0, 0x10013647, 0x10013eb7, 0x10014f6a, 0x10015816, 0x10015eab, 0x10016194, 0x10017963, 0x10017c29, 0x10018ce6, 0x1001a0f5, 0x1001a159, 0x102c9d62
 */

void __thiscall GameClient::ChatManager::SendMessageA(
        unsigned __int8 (__thiscall ***this)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD),
        struct GameClient::LocalCharacter *a2,
        int a3,
        void *a4)
{
  int v5; // edi
  int v6; // eax
  const char *v7; // eax
  Outpop::Utility::Ref_Object *v8; // eax
  Outpop::Utility::Ref_Object *v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // eax
  Outpop::Utility::Ref_Object *v13; // eax
  Outpop::Utility::Ref_Object *v14; // esi
  int v15; // edi
  int v16; // eax
  Outpop::Utility::Ref_Object *v17; // eax
  Outpop::Utility::Ref_Object *v18; // esi
  int v19; // eax
  int v20; // eax
  GameClient::GroupManager *v21; // eax
  int v22; // eax
  int v23; // eax
  GameClient::GroupManager *v24; // eax
  int v25; // eax
  int v26; // eax
  GameClient::GroupManager *v27; // eax
  GameClient::GroupManager *v28; // eax
  GameClient::GroupManager *v29; // eax
  int v30; // edi
  _DWORD *v31; // ebp
  void (__thiscall **v32)(_DWORD *, int); // esi
  int v33; // ecx
  bool v34; // bl
  GameClient::RobotManager *v35; // eax
  float *Robot; // eax
  Outpop::Utility::Ref_Object *v37; // ecx
  bool v38; // zf
  Outpop::Utility::Ref_Object *v39; // eax
  Outpop::Message::Message *v40; // ebp
  Outpop::Message::Message *v41; // ecx
  int *v42; // eax
  GameClient::RobotManager *v43; // eax
  struct GameClient::Robot *v44; // eax
  int v45; // edx
  int v46; // ecx
  int v47; // edx
  unsigned int i; // ebp
  void *v49; // ecx
  int v50; // [esp+4h] [ebp-274h]
  int v51; // [esp+4h] [ebp-274h]
  int v52; // [esp+4h] [ebp-274h]
  int v53; // [esp+4h] [ebp-274h]
  int v54; // [esp+8h] [ebp-270h]
  int v55; // [esp+8h] [ebp-270h]
  int v56; // [esp+8h] [ebp-270h]
  unsigned int v57; // [esp+8h] [ebp-270h]
  bool v58; // [esp+8h] [ebp-270h]
  unsigned int v59; // [esp+8h] [ebp-270h]
  int v60; // [esp+8h] [ebp-270h]
  int v61; // [esp+8h] [ebp-270h]
  int v62; // [esp+8h] [ebp-270h]
  int v63; // [esp+20h] [ebp-258h] BYREF
  int v64; // [esp+24h] [ebp-254h] BYREF
  unsigned int v65; // [esp+28h] [ebp-250h] BYREF
  Outpop::Message::Message *v66; // [esp+2Ch] [ebp-24Ch] BYREF
  Outpop::Utility::Ref_Object *v67; // [esp+30h] [ebp-248h] BYREF
  float v68; // [esp+34h] [ebp-244h] BYREF
  int v69; // [esp+38h] [ebp-240h] BYREF
  _DWORD v70[4]; // [esp+3Ch] [ebp-23Ch] BYREF
  int v71; // [esp+4Ch] [ebp-22Ch] BYREF
  int v72; // [esp+50h] [ebp-228h] BYREF
  int v73; // [esp+54h] [ebp-224h] BYREF
  int v74[4]; // [esp+58h] [ebp-220h] BYREF
  float v75[3]; // [esp+68h] [ebp-210h] BYREF
  _DWORD v76[5]; // [esp+74h] [ebp-204h] BYREF
  _BYTE v77[28]; // [esp+88h] [ebp-1F0h] BYREF
  _BYTE v78[28]; // [esp+A4h] [ebp-1D4h] BYREF
  _BYTE v79[28]; // [esp+C0h] [ebp-1B8h] BYREF
  _BYTE v80[28]; // [esp+DCh] [ebp-19Ch] BYREF
  _BYTE v81[28]; // [esp+F8h] [ebp-180h] BYREF
  _BYTE v82[28]; // [esp+114h] [ebp-164h] BYREF
  _BYTE v83[20]; // [esp+130h] [ebp-148h] BYREF
  int v84; // [esp+144h] [ebp-134h]
  _BYTE v85[28]; // [esp+14Ch] [ebp-12Ch] BYREF
  _BYTE v86[256]; // [esp+168h] [ebp-110h] BYREF
  int v87; // [esp+274h] [ebp-4h]

  if ( *((_DWORD *)a4 + 5) && a2 )
  {
    if ( *(_BYTE *)std::string::operator[](a4, 0) == 47 )
    {
      v38 = *((_BYTE *)a2 + 176) == 0;
      v69 = -1;
      if ( v38 || !(*this[5])(this + 5, a4, &v69, 1, -1) )
      {
        switch ( *(_BYTE *)std::string::operator[](a4, 1) )
        {
          case 'a':
            v22 = std::string::size(a4);
            v23 = std::string::substr(a4, v79, 2, v22 - 2);
            v87 = 23;
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
              v86,
              v23,
              3,
              1);
            LOBYTE(v87) = 25;
            std::string::~string(v79);
            std::istream::operator>>(v86, &v65);
            v58 = v65 != 0;
            v24 = GameClient::GroupManager::Instance();
            GameClient::GroupManager::AnswerInviteRequest(v24, a2, v58);
            goto LABEL_41;
          case 'c':
            v25 = std::string::size(a4);
            v26 = std::string::substr(a4, v78, 2, v25 - 2);
            v87 = 26;
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
              v86,
              v26,
              3,
              1);
            LOBYTE(v87) = 28;
            std::string::~string(v78);
            std::istream::operator>>(v86, &v65);
            v59 = v65;
            v27 = GameClient::GroupManager::Instance();
            GameClient::GroupManager::RequestChangeLeader(v27, a2, v59);
            goto LABEL_41;
          case 'd':
            v29 = GameClient::GroupManager::Instance();
            GameClient::GroupManager::RequestDismiss(v29, a2);
            return;
          case 'h':
            v30 = GUISystem::Instance();
            v31 = (_DWORD *)GUISystem::Instance();
            v32 = (void (__thiscall **)(_DWORD *, int))(*v31 + 32);
            LOBYTE(v33) = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v30 + 36))(v30) == 0;
            (*v32)(v31, v33);
            v34 = *(_BYTE *)HUDSystem::Instance() == 0;
            *(_BYTE *)HUDSystem::Instance() = v34;
            return;
          case 'i':
            v19 = std::string::size(a4);
            v20 = std::string::substr(a4, v77, 2, v19 - 2);
            v87 = 20;
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
              v86,
              v20,
              3,
              1);
            LOBYTE(v87) = 22;
            std::string::~string(v77);
            std::istream::operator>>(v86, &v65);
            v57 = v65;
            v21 = GameClient::GroupManager::Instance();
            GameClient::GroupManager::RequestInviteMember(v21, a2, v57);
LABEL_41:
            v87 = -1;
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbase destructor'(v86);
            return;
          case 'k':
            v60 = *((_DWORD *)a2 + 73);
            v35 = GameClient::RobotManager::Instance();
            Robot = (float *)GameClient::RobotManager::GetRobot(v35, v60);
            if ( !Robot )
              return;
            *(float *)&v65 = Robot[6] + 500.0;
            v68 = Robot[7] + 0.0;
            *(float *)&v64 = Robot[8] + 0.0;
            v75[0] = *(float *)&v65;
            v75[1] = v68;
            v75[2] = *(float *)&v64;
            sub_100077ED((int)&v64, 9, 92, COERCE_INT(0.0), 1, 512);
            v87 = 29;
            sub_1000B7E4((int)v75);
            j_nullsub_44((int)&v64);
            v37 = (Outpop::Utility::Ref_Object *)v64;
            v38 = v64 == 0;
            break;
          case 'l':
            v28 = GameClient::GroupManager::Instance();
            GameClient::GroupManager::RequestLeaveGroup(v28, a2);
            return;
          default:
            return;
        }
LABEL_76:
        v87 = -1;
        if ( !v38 )
          Outpop::Utility::Ref_Object::release(v37);
      }
      else
      {
        switch ( v69 )
        {
          case 1:
            v15 = sub_1000194C(0);
            if ( v15 )
            {
              v16 = std::string::size(a4);
              std::string::substr(a4, v85, 10, v16 - 10);
              v87 = 6;
              std::string::string(v83);
              LOBYTE(v87) = 7;
              v64 = 1;
              *(float *)&v65 = 0.0;
              std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
                v86,
                v85,
                3,
                1);
              LOBYTE(v87) = 8;
              std::istream::operator>>(v86, &v64);
              if ( (_WORD)v64 == 1 )
                std::istream::operator>>(v86, &v65);
              std::operator>><char>(v86, v83);
              if ( v84 )
              {
                v17 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::operator new(0x6Cu);
                v18 = v17;
                v67 = v17;
                LOBYTE(v87) = 9;
                if ( v17 )
                {
                  Outpop::Message::Message::Message(v17, 1, 1, 0, 0, 512);
                  *(_DWORD *)v18 = &Outpop::Message::Message::`vftable';
                }
                else
                {
                  v18 = 0;
                }
                LOBYTE(v87) = 8;
                sub_1000BCD5((int)v18);
                LOBYTE(v87) = 10;
                Outpop::Message::Message::set_protocol_catalog((Outpop::Message::Message *)v63, 0x15u);
                Outpop::Message::Message::set_protocol_type((Outpop::Message::Message *)v63, 0x5226u);
                sub_1000432C((int)&v64);
                sub_10015EAB((int)&v65);
                sub_10002842((int)v83);
                sub_1000E56B(*(_DWORD *)(v15 + 236), (int)&v63);
                sub_10015816(v52, v56);
                std::string::string(v77, &unk_103174EC);
                LOBYTE(v87) = 11;
                std::string::string(v79, &unk_103174AF);
                LOBYTE(v87) = 12;
                GameClient::ChatManager::Instance();
                GameClient::ChatManager::AddMessage(0, (int)v79, (int)v77);
                LOBYTE(v87) = 11;
                std::string::~string(v79);
                LOBYTE(v87) = 10;
                std::string::~string(v77);
                LOBYTE(v87) = 8;
                if ( v63 )
                  Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v63);
              }
              LOBYTE(v87) = 7;
              std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbase destructor'(v86);
              LOBYTE(v87) = 6;
              std::string::~string(v83);
              v87 = -1;
              std::string::~string(v85);
            }
            break;
          case 2:
            v10 = sub_1000194C(0);
            if ( v10 )
            {
              v11 = std::string::size(a4);
              std::string::substr(a4, v85, 5, v11 - 5);
              v87 = 13;
              std::string::string(v83);
              LOBYTE(v87) = 14;
              v64 = 1;
              *(float *)&v65 = 0.0;
              v68 = 0.0;
              std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
                v86,
                v85,
                3,
                1);
              LOBYTE(v87) = 15;
              v12 = std::istream::operator>>(v86, &v64);
              std::istream::operator>>(v12, &v65);
              if ( (_WORD)v64 == 2 )
                std::istream::operator>>(v86, &v68);
              std::operator>><char>(v86, v83);
              if ( v84 )
              {
                v13 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::operator new(0x6Cu);
                v14 = v13;
                v67 = v13;
                LOBYTE(v87) = 16;
                if ( v13 )
                {
                  Outpop::Message::Message::Message(v13, 1, 1, 0, 0, 512);
                  *(_DWORD *)v14 = &Outpop::Message::Message::`vftable';
                }
                else
                {
                  v14 = 0;
                }
                LOBYTE(v87) = 15;
                sub_1000BCD5((int)v14);
                LOBYTE(v87) = 17;
                Outpop::Message::Message::set_protocol_catalog((Outpop::Message::Message *)v63, 0x15u);
                Outpop::Message::Message::set_protocol_type((Outpop::Message::Message *)v63, 0x5227u);
                sub_1000432C((int)&v64);
                sub_10015EAB((int)&v65);
                sub_10015EAB((int)&v68);
                sub_10002842((int)v83);
                sub_1000E56B(*(_DWORD *)(v10 + 236), (int)&v63);
                sub_10015816(v51, v55);
                std::string::string(v78, &unk_103174F8);
                LOBYTE(v87) = 18;
                std::string::string(v82, &unk_103174BF);
                LOBYTE(v87) = 19;
                GameClient::ChatManager::Instance();
                GameClient::ChatManager::AddMessage(0, (int)v82, (int)v78);
                LOBYTE(v87) = 18;
                std::string::~string(v82);
                LOBYTE(v87) = 17;
                std::string::~string(v78);
                LOBYTE(v87) = 15;
                if ( v63 )
                  Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v63);
              }
              LOBYTE(v87) = 14;
              std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbase destructor'(v86);
              LOBYTE(v87) = 13;
              std::string::~string(v83);
              v87 = -1;
              std::string::~string(v85);
            }
            break;
          case 3:
            v5 = sub_1000194C(0);
            if ( v5 )
            {
              if ( (unsigned int)std::string::size(a4) > 6 )
              {
                v6 = std::string::size(a4);
                std::string::substr(a4, v85, 6, v6 - 6);
                v87 = 0;
                *(float *)&v64 = 0.0;
                v7 = (const char *)std::string::c_str(v85);
                if ( sscanf(v7, "%s %d", v86, &v64) == 2 )
                {
                  std::string::string(v83, v86);
                  LOBYTE(v87) = 1;
                  v8 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::operator new(0x6Cu);
                  v9 = v8;
                  v67 = v8;
                  LOBYTE(v87) = 2;
                  if ( v8 )
                  {
                    Outpop::Message::Message::Message(v8, 1, 1, 1, 0, 512);
                    *(_DWORD *)v9 = &Outpop::Message::Message::`vftable';
                  }
                  else
                  {
                    v9 = 0;
                  }
                  LOBYTE(v87) = 1;
                  sub_1000BCD5((int)v9);
                  LOBYTE(v87) = 3;
                  Outpop::Message::Message::set_protocol_catalog((Outpop::Message::Message *)v63, 0xDu);
                  Outpop::Message::Message::set_protocol_type((Outpop::Message::Message *)v63, 0x32F1u);
                  Outpop::Message::Message::set_multi_id((Outpop::Message::Message *)v63, 0);
                  sub_10015EAB(v5 + 4);
                  sub_10002842((int)v83);
                  sub_10015EAB((int)&v64);
                  sub_1000E56B(*(_DWORD *)(v5 + 236), (int)&v63);
                  sub_10013EB7(v50, v54);
                  std::string::string(v81, &unk_103174E0);
                  LOBYTE(v87) = 4;
                  std::string::string(v80, &unk_103174AE);
                  LOBYTE(v87) = 5;
                  GameClient::ChatManager::Instance();
                  GameClient::ChatManager::AddMessage(0, (int)v80, (int)v81);
                  LOBYTE(v87) = 4;
                  std::string::~string(v80);
                  LOBYTE(v87) = 3;
                  std::string::~string(v81);
                  LOBYTE(v87) = 1;
                  if ( v63 )
                    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v63);
                  LOBYTE(v87) = 0;
                  std::string::~string(v83);
                }
                v87 = -1;
                std::string::~string(v85);
              }
            }
            break;
        }
      }
    }
    else
    {
      v39 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::operator new(0x6Cu);
      v40 = v39;
      v67 = v39;
      v87 = 30;
      if ( v39 )
      {
        Outpop::Message::Message::Message(v39, 1, 1, 0, 0, 512);
        *(_DWORD *)v40 = &Outpop::Message::Message::`vftable';
        v41 = v40;
      }
      else
      {
        v41 = 0;
      }
      v87 = -1;
      v66 = v41;
      if ( v41 )
        Outpop::Utility::Ref_Object::addref(v41);
      v87 = 31;
      Outpop::Message::Message::set_protocol_catalog(v66, 0x15u);
      switch ( a3 )
      {
        case 2:
        case 3:
        case 4:
        case 5:
          Outpop::Message::Message::set_protocol_type(v66, 0x520Cu);
          switch ( a3 )
          {
            case 2:
              v63 = 1;
              v42 = &v63;
              goto LABEL_60;
            case 3:
              v72 = 4;
              v42 = &v72;
LABEL_60:
              sub_1000432C((int)v42);
              break;
            case 4:
              v71 = 2;
              sub_1000432C((int)&v71);
              break;
            case 5:
              v73 = 3;
              sub_1000432C((int)&v73);
              break;
            default:
              break;
          }
          sub_10002842((int)a4);
          goto LABEL_75;
        case 7:
          Outpop::Message::Message::set_protocol_type(v66, 0x520Bu);
          sub_10002842((int)a4);
          if ( !*((_BYTE *)a2 + 176) )
          {
            GameClient::ChatManager::Instance();
            GameClient::ChatManager::AddMessage(11, (int)a2 + 8, (int)a4);
          }
          goto LABEL_75;
        case 9:
          GameClient::ChatManager::AddMessage(9, (int)a2 + 8, (int)a4);
          v61 = *((_DWORD *)a2 + 73);
          v43 = GameClient::RobotManager::Instance();
          v44 = GameClient::RobotManager::GetRobot(v43, v61);
          if ( !v44 )
          {
            v37 = v66;
            v38 = v66 == 0;
            goto LABEL_76;
          }
          memset(&v70[1], 0, 12);
          v45 = *((_DWORD *)v44 + 6);
          *(float *)&v76[3] = 200.0;
          v46 = *((_DWORD *)v44 + 7);
          v76[0] = v45;
          *(float *)&v76[4] = 3.4028235e38;
          v47 = *((_DWORD *)v44 + 8);
          v76[1] = v46;
          LOBYTE(v87) = 32;
          v76[2] = v47;
          GameClient::RobotManager::Instance();
          sub_1000A830((int)v76, (int)v70);
          memset(&v74[1], 0, 12);
          LOBYTE(v87) = 33;
          for ( i = 0; i < sub_1000326A(); ++i )
          {
            if ( *(_DWORD *)(*(_DWORD *)sub_1000902A(i) + 108) == *((_DWORD *)a2 + 12)
              && *(_DWORD *)(*(_DWORD *)sub_1000902A(i) + 16) != *((_DWORD *)a2 + 1) )
            {
              v65 = *(unsigned int *)(*(_DWORD *)sub_1000902A(i) + 16);
              sub_1001A0F5(v74, (int)&v65);
            }
          }
          v49 = *(void **)sub_100047AF((int)&v67);
          LOBYTE(v87) = 34;
          sub_100128F0(v49, (int)a2, (int)v74, a4);
          LOBYTE(v87) = 33;
          if ( v67 )
            Outpop::Utility::Ref_Object::release(v67);
          sub_1000D51C();
          sub_1000DA53();
          v87 = -1;
          if ( v66 )
            Outpop::Utility::Ref_Object::release(v66);
          break;
        default:
LABEL_75:
          sub_1000E56B(*((_DWORD *)a2 + 59), (int)&v66);
          sub_10015816(v53, v62);
          v37 = v66;
          v38 = v66 == 0;
          goto LABEL_76;
      }
    }
  }
}
