/*
 *  PXListViewDropHighlight.h
 *  PXListView
 *
 *  Created by Uli Kusterer on 11.07.10.
 *  Copyright 2010 Uli Kusterer. All rights reserved.
 *
 */

enum PXListViewDropHighlight
{
	PXListViewDropNowhere = 0,
	PXListViewDropOn,
	PXListViewDropAbove,
	PXListViewDropBelow
};

#ifndef __cplusplus
typedef NSUInteger PXListViewDropHighlight;
#endif
