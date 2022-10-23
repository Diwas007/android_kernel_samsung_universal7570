/*
 * drivers/media/platform/exynos/mfc/s5p_mfc_dec_internal.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __S5P_MFC_DEC_INTERNAL_H
#define __S5P_MFC_DEC_INTERNAL_H __FILE__

#include "s5p_mfc_common.h"

static struct s5p_mfc_fmt formats[] = {
	{
		.name = "4:2:0 3 Planes Y/Cb/Cr",
		.fourcc = V4L2_PIX_FMT_YUV420M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_RAW,
		.num_planes = 3,
		.mem_planes = 3,
	},
	{
		.name = "4:2:0 3 Planes Y/Cb/Cr single",
		.fourcc = V4L2_PIX_FMT_YUV420N,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_RAW,
		.num_planes = 3,
		.mem_planes = 1,
	},
	{
		.name = "4:2:0 3 Planes Y/Cr/Cb",
		.fourcc = V4L2_PIX_FMT_YVU420M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_RAW,
		.num_planes = 3,
		.mem_planes = 3,
	},
	{
		.name = "4:2:0 2 Planes 16x16 Tiles",
		.fourcc = V4L2_PIX_FMT_NV12MT_16X16,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_RAW,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes 64x32 Tiles",
		.fourcc = V4L2_PIX_FMT_NV12MT,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_RAW,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr",
		.fourcc = V4L2_PIX_FMT_NV12M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_RAW,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr single",
		.fourcc = V4L2_PIX_FMT_NV12N,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_RAW,
		.num_planes = 2,
		.mem_planes = 1,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr 10bit single",
		.fourcc = V4L2_PIX_FMT_NV12N_10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_RAW,
		.num_planes = 2,
		.mem_planes = 1,
	},
	{
		.name = "4:2:0 2 Planes Y/CrCb",
		.fourcc = V4L2_PIX_FMT_NV21M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_RAW,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "H264 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_H264,
		.codec_mode = S5P_FIMV_CODEC_H264_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	/* MFC 6.x only */
	{
		.name = "H264/MVC Encoded Stream",
		.fourcc = V4L2_PIX_FMT_H264_MVC,
		.codec_mode = S5P_FIMV_CODEC_H264_MVC_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "H263 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_H263,
		.codec_mode = S5P_FIMV_CODEC_H263_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "MPEG1 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_MPEG1,
		.codec_mode = S5P_FIMV_CODEC_MPEG2_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "MPEG2 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_MPEG2,
		.codec_mode = S5P_FIMV_CODEC_MPEG2_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "MPEG4 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_MPEG4,
		.codec_mode = S5P_FIMV_CODEC_MPEG4_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV,
		.codec_mode = S5P_FIMV_CODEC_MPEG4_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV1 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV1,
		.codec_mode = S5P_FIMV_CODEC_FIMV1_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV2 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV2,
		.codec_mode = S5P_FIMV_CODEC_FIMV2_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV3 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV3,
		.codec_mode = S5P_FIMV_CODEC_FIMV3_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV4 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV4,
		.codec_mode = S5P_FIMV_CODEC_FIMV4_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "XviD Encoded Stream",
		.fourcc = V4L2_PIX_FMT_XVID,
		.codec_mode = S5P_FIMV_CODEC_MPEG4_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VC1 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VC1_ANNEX_G,
		.codec_mode = S5P_FIMV_CODEC_VC1_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VC1 RCV Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VC1_ANNEX_L,
		.codec_mode = S5P_FIMV_CODEC_VC1RCV_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VP8 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VP8,
		.codec_mode = S5P_FIMV_CODEC_VP8_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VP9 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VP9,
		.codec_mode = S5P_FIMV_CODEC_VP9_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "HEVC Encoded Stream",
		.fourcc = V4L2_PIX_FMT_HEVC,
		.codec_mode = S5P_FIMV_CODEC_HEVC_DEC,
		.type = MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
};

#define NUM_FORMATS ARRAY_SIZE(formats)

static struct v4l2_queryctrl controls[] = {
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_DECODER_H264_DISPLAY_DELAY,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "H.264 Display Delay",
		.minimum = -1,
		.maximum = 32,
		.step = 1,
		.default_value = -1,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_DECODER_MPEG4_DEBLOCK_FILTER,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Mpeg4 Loop Filter Enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_DECODER_SLICE_INTERFACE,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Slice Interface Enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_PACKED_PB,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Packed PB Enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_FRAME_TAG,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Frame Tag",
		.minimum = 0,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_CACHEABLE,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Cacheable flag",
		.minimum = 0,
		.maximum = 3,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_CRC_ENABLE,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "CRC enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_CRC_DATA_LUMA,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "CRC data",
		.minimum = 0,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_CRC_DATA_CHROMA,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "CRC data",
		.minimum = 0,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_DISPLAY_STATUS,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Display status",
		.minimum = 0,
		.maximum = 4,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_FRAME_TYPE,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Frame type",
		.minimum = 0,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_H264_SEI_FRAME_PACKING,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Frame pack sei parse flag",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_I_FRAME_DECODING,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "I frame decoding mode",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC51_VIDEO_FRAME_RATE,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Frames per second in 1000x scale",
		.minimum = 1,
		.maximum = 300000,
		.step = 1,
		.default_value = 30000,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_DECODER_IMMEDIATE_DISPLAY,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Immediate Display Enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_DECODER_DECODING_TIMESTAMP_MODE,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Decoding Timestamp Mode Enable",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_DECODER_WAIT_DECODING_START,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Wait until buffer setting done",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_GET_VERSION_INFO,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Get MFC version information",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_SET_DUAL_DPB_MODE,
		.type = V4L2_CTRL_TYPE_BOOLEAN,
		.name = "Set Dual DPB mode",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_VIDEO_QOS_RATIO,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "QoS ratio value",
		.minimum = 20,
		.maximum = 1000,
		.step = 10,
		.default_value = 100,
	},
	{
		.id = V4L2_CID_MPEG_MFC_SET_DYNAMIC_DPB_MODE,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Set dynamic DPB",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_SET_USER_SHARED_HANDLE,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Set dynamic DPB",
		.minimum = 0,
		.maximum = 65535,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_GET_EXT_INFO,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Get extra information",
		.minimum = INT_MIN,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_SET_BUF_PROCESS_TYPE,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "Set buffer process type",
		.minimum = INT_MIN,
		.maximum = INT_MAX,
		.step = 1,
		.default_value = 0,
	},
	{
		.id = V4L2_CID_MPEG_MFC_GET_10BIT_INFO,
		.type = V4L2_CTRL_TYPE_INTEGER,
		.name = "10 bit contents information",
		.minimum = 0,
		.maximum = 1,
		.step = 1,
		.default_value = 0,
	},
};

#define NUM_CTRLS ARRAY_SIZE(controls)

static struct s5p_mfc_ctrl_cfg mfc_ctrl_list[] = {
	{
		.type = MFC_CTRL_TYPE_SET,
		.id = V4L2_CID_MPEG_MFC51_VIDEO_FRAME_TAG,
		.is_volatile = 1,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_PICTURE_TAG,
		.mask = 0xFFFFFFFF,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_DST,
		.id = V4L2_CID_MPEG_MFC51_VIDEO_FRAME_TAG,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_RET_PICTURE_TAG_TOP,
		.mask = 0xFFFFFFFF,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_DST,
		.id = V4L2_CID_MPEG_MFC51_VIDEO_DISPLAY_STATUS,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_DISPLAY_STATUS,
		.mask = 0x7,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	/* CRC related definitions are based on non-H.264 type */
	{
		.type = MFC_CTRL_TYPE_GET_SRC,
		.id = V4L2_CID_MPEG_MFC51_VIDEO_CRC_DATA_LUMA,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_DECODED_FIRST_PLANE_CRC,
		.mask = 0xFFFFFFFF,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_SRC,
		.id = V4L2_CID_MPEG_MFC51_VIDEO_CRC_DATA_CHROMA,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_DECODED_SECOND_PLANE_CRC,
		.mask = 0xFFFFFFFF,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_SRC,
		.id = V4L2_CID_MPEG_MFC51_VIDEO_CRC_DATA_LUMA_BOT,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_DECODED_FIRST_PLANE_CRC,
		.mask = 0xFFFFFFFF,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_SRC,
		.id = V4L2_CID_MPEG_MFC51_VIDEO_CRC_DATA_CHROMA_BOT,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_DECODED_SECOND_PLANE_CRC,
		.mask = 0xFFFFFFFF,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_SRC,
		.id = V4L2_CID_MPEG_MFC51_VIDEO_CRC_GENERATED,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_DECODED_STATUS,
		.mask = S5P_FIMV_DEC_STATUS_CRC_GEN_MASK,
		.shft = S5P_FIMV_DEC_STATUS_CRC_GEN_SHIFT,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_DST,
		.id = V4L2_CID_MPEG_VIDEO_H264_SEI_FP_AVAIL,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_FRAME_PACK_SEI_AVAIL,
		.mask = 0x1,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_DST,
		.id = V4L2_CID_MPEG_VIDEO_H264_SEI_FP_ARRGMENT_ID,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_FRAME_PACK_ARRGMENT_ID,
		.mask = 0xFFFFFFFF,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_DST,
		.id = V4L2_CID_MPEG_VIDEO_H264_SEI_FP_INFO,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_FRAME_PACK_SEI_INFO,
		.mask = 0x3FFFF,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_DST,
		.id = V4L2_CID_MPEG_VIDEO_H264_SEI_FP_GRID_POS,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_FRAME_PACK_GRID_POS,
		.mask = 0xFFFF,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_DST,
		.id = V4L2_CID_MPEG_VIDEO_H264_MVC_VIEW_ID,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_MVC_VIEW_ID,
		.mask = 0xFFFF,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_DST,
		.id = V4L2_CID_MPEG_VIDEO_MATRIX_COEFFICIENTS,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_VIDEO_SIGNAL_TYPE,
		.mask = 0xFF,
		.shft = 0,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_DST,
		.id = V4L2_CID_MPEG_VIDEO_FULL_RANGE_FLAG,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_VIDEO_SIGNAL_TYPE,
		.mask = 0x1,
		.shft = 25,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_DST,
		.id = V4L2_CID_MPEG_VIDEO_COLOUR_PRIMARIES,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_VIDEO_SIGNAL_TYPE,
		.mask = 0xFF,
		.shft = 16,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
	{
		.type = MFC_CTRL_TYPE_GET_DST,
		.id = V4L2_CID_MPEG_VIDEO_TRANSFER_CHARACTERISTICS,
		.is_volatile = 0,
		.mode = MFC_CTRL_MODE_SFR,
		.addr = S5P_FIMV_D_VIDEO_SIGNAL_TYPE,
		.mask = 0xFF,
		.shft = 8,
		.flag_mode = MFC_CTRL_MODE_NONE,
		.flag_addr = 0,
		.flag_shft = 0,
	},
};

#define NUM_CTRL_CFGS ARRAY_SIZE(mfc_ctrl_list)

#endif /* __S5P_MFC_DEC_INTERNAL_H */
