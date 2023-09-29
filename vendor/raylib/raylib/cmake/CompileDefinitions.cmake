# Adding compile definitions
target_compile_definitions("raylib" PUBLIC "${PLATFORM_CPP}")
target_compile_definitions("raylib" PUBLIC "${GRAPHICS}")

function(define_if target variable)
    if (${${variable}})
        message(STATUS "${variable}=${${variable}}")
        target_compile_definitions(${target} PUBLIC "${variable}")
    endif ()
endfunction()

if (${CUSTOMIZE_BUILD})
    target_compile_definitions("raylib" PUBLIC EXTERNAL_CONFIG_FLAGS)
    define_if("raylib" USE_AUDIO)
    define_if("raylib" SUPPORT_MODULE_RSHAPES)
    define_if("raylib" SUPPORT_MODULE_RTEXTURES)
    define_if("raylib" SUPPORT_MODULE_RTEXT)
    define_if("raylib" SUPPORT_MODULE_RMODELS)
    define_if("raylib" SUPPORT_MODULE_RAUDIO)
    define_if("raylib" SUPPORT_CAMERA_SYSTEM)
    define_if("raylib" SUPPORT_GESTURES_SYSTEM)
    define_if("raylib" SUPPORT_MOUSE_GESTURES)
    define_if("raylib" SUPPORT_SSH_KEYBOARD_RPI)
    define_if("raylib" SUPPORT_DEFAULT_FONT)
    define_if("raylib" SUPPORT_SCREEN_CAPTURE)
    define_if("raylib" SUPPORT_GIF_RECORDING)
    define_if("raylib" SUPPORT_BUSY_WAIT_LOOP)
    define_if("raylib" SUPPORT_EVENTS_WAITING)
    define_if("raylib" SUPPORT_WINMM_HIGHRES_TIMER)
    define_if("raylib" SUPPORT_COMPRESSION_API)
    define_if("raylib" SUPPORT_QUADS_DRAW_MODE)
    define_if("raylib" SUPPORT_IMAGE_EXPORT)
    define_if("raylib" SUPPORT_IMAGE_GENERATION)
    define_if("raylib" SUPPORT_IMAGE_MANIPULATION)
    define_if("raylib" SUPPORT_FILEFORMAT_PNG)
    define_if("raylib" SUPPORT_FILEFORMAT_DDS)
    define_if("raylib" SUPPORT_FILEFORMAT_HDR)
    define_if("raylib" SUPPORT_FILEFORMAT_PNM)
    define_if("raylib" SUPPORT_FILEFORMAT_KTX)
    define_if("raylib" SUPPORT_FILEFORMAT_ASTC)
    define_if("raylib" SUPPORT_FILEFORMAT_BMP)
    define_if("raylib" SUPPORT_FILEFORMAT_TGA)
    define_if("raylib" SUPPORT_FILEFORMAT_JPG)
    define_if("raylib" SUPPORT_FILEFORMAT_GIF)
    define_if("raylib" SUPPORT_FILEFORMAT_QOI)
    define_if("raylib" SUPPORT_FILEFORMAT_PSD)
    define_if("raylib" SUPPORT_FILEFORMAT_PKM)
    define_if("raylib" SUPPORT_FILEFORMAT_PVR)
    define_if("raylib" SUPPORT_FILEFORMAT_FNT)
    define_if("raylib" SUPPORT_FILEFORMAT_TTF)
    define_if("raylib" SUPPORT_TEXT_MANIPULATION)
    define_if("raylib" SUPPORT_MESH_GENERATION)
    define_if("raylib" SUPPORT_FILEFORMAT_OBJ)
    define_if("raylib" SUPPORT_FILEFORMAT_MTL)
    define_if("raylib" SUPPORT_FILEFORMAT_IQM)
    define_if("raylib" SUPPORT_FILEFORMAT_GLTF)
    define_if("raylib" SUPPORT_FILEFORMAT_VOX)
    define_if("raylib" SUPPORT_FILEFORMAT_WAV)
    define_if("raylib" SUPPORT_FILEFORMAT_OGG)
    define_if("raylib" SUPPORT_FILEFORMAT_XM)
    define_if("raylib" SUPPORT_FILEFORMAT_MOD)
    define_if("raylib" SUPPORT_FILEFORMAT_MP3)
    define_if("raylib" SUPPORT_FILEFORMAT_FLAC)
    define_if("raylib" SUPPORT_STANDARD_FILEIO)
    define_if("raylib" SUPPORT_TRACELOG)

    if (UNIX AND NOT APPLE)
        target_compile_definitions("raylib" PUBLIC "MAX_FILEPATH_LENGTH=4096")
    else ()
        target_compile_definitions("raylib" PUBLIC "MAX_FILEPATH_LENGTH=512")
    endif ()
    
    target_compile_definitions("raylib" PUBLIC "MAX_GAMEPADS=4")
    target_compile_definitions("raylib" PUBLIC "MAX_GAMEPAD_AXIS=8")
    target_compile_definitions("raylib" PUBLIC "MAX_GAMEPAD_BUTTONS=32")
    target_compile_definitions("raylib" PUBLIC "MAX_TOUCH_POINTS=10")
    target_compile_definitions("raylib" PUBLIC "MAX_KEY_PRESSED_QUEUE=16")
    
    target_compile_definitions("raylib" PUBLIC "STORAGE_DATA_FILE=\"storage.data\"")
    target_compile_definitions("raylib" PUBLIC "MAX_CHAR_PRESSED_QUEUE=16")
    target_compile_definitions("raylib" PUBLIC "MAX_DECOMPRESSION_SIZE=64")
    
    if (${GRAPHICS} MATCHES "GRAPHICS_API_OPENGL_33" OR ${GRAPHICS} MATCHES "GRAPHICS_API_OPENGL_11")
        target_compile_definitions("raylib" PUBLIC "DEFAULT_BATCH_BUFFER_ELEMENTS=8192")
    elseif (${GRAPHICS} MATCHES "GRAPHICS_API_OPENGL_ES2")
        target_compile_definitions("raylib" PUBLIC "DEFAULT_BATCH_BUFFER_ELEMENTS=2048")
    endif ()

    target_compile_definitions("raylib" PUBLIC "DEFAULT_BATCH_DRAWCALLS=256")
    target_compile_definitions("raylib" PUBLIC "MAX_MATRIX_STACK_SIZE=32")
    target_compile_definitions("raylib" PUBLIC "MAX_SHADER_LOCATIONS=32")
    target_compile_definitions("raylib" PUBLIC "MAX_MATERIAL_MAPS=12")
    target_compile_definitions("raylib" PUBLIC "RL_CULL_DISTANCE_NEAR=0.01")
    target_compile_definitions("raylib" PUBLIC "RL_CULL_DISTANCE_FAR=1000.0")

    target_compile_definitions("raylib" PUBLIC "DEFAULT_SHADER_ATTRIB_NAME_POSITION=\"vertexPosition\"")
    target_compile_definitions("raylib" PUBLIC "DEFAULT_SHADER_ATTRIB_NAME_TEXCOORD=\"vertexTexCoord\"")
    target_compile_definitions("raylib" PUBLIC "DEFAULT_SHADER_ATTRIB_NAME_NORMAL=\"vertexNormal\"")
    target_compile_definitions("raylib" PUBLIC "DEFAULT_SHADER_ATTRIB_NAME_COLOR=\"vertexColor\"")
    target_compile_definitions("raylib" PUBLIC "DEFAULT_SHADER_ATTRIB_NAME_TANGENT=\"vertexTangent\"")
    target_compile_definitions("raylib" PUBLIC "DEFAULT_SHADER_ATTRIB_NAME_TEXCOORD2=\"vertexTexCoord2\"")

    target_compile_definitions("raylib" PUBLIC "MAX_TEXT_BUFFER_LENGTH=1024")
    target_compile_definitions("raylib" PUBLIC "MAX_TEXT_UNICODE_CHARS=512")
    target_compile_definitions("raylib" PUBLIC "MAX_TEXTSPLIT_COUNT=128")

    target_compile_definitions("raylib" PUBLIC "AUDIO_DEVICE_FORMAT=ma_format_f32")
    target_compile_definitions("raylib" PUBLIC "AUDIO_DEVICE_CHANNELS=2")
    target_compile_definitions("raylib" PUBLIC "AUDIO_DEVICE_SAMPLE_RATE=44100")
    target_compile_definitions("raylib" PUBLIC "DEFAULT_AUDIO_BUFFER_SIZE=4096")

    target_compile_definitions("raylib" PUBLIC "MAX_TRACELOG_MSG_LENGTH=128")
    target_compile_definitions("raylib" PUBLIC "MAX_UWP_MESSAGES=512")
endif ()

