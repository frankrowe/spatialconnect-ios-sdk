/*!
 * Copyright 2016 Boundless http://boundlessgeo.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License
 */

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SCFormItemType) {
  SCFORM_TYPE_INTEGER,
  SCFORM_TYPE_STRING,
  SCFORM_TYPE_BOOLEAN,
  SCFORM_TYPE_NUMBER,
  SCFORM_TYPE_DATE,
  SCFORM_TYPE_SLIDER,
  SCFORM_TYPE_COUNTER,
  SCFORM_TYPE_SELECT,
  SCFORM_TYPE_PHOTO
};

@interface SCLayerConfig : NSObject

@property(nonatomic) NSString *identifier;
@property(nonatomic, strong) NSString *key;
@property(nonatomic, strong) NSString *label;
@property(nonatomic) NSInteger version;
@property(nonatomic, strong) NSArray *fields;

- (id)initWithDict:(NSDictionary *)d;
- (NSDictionary *)dictionary;
- (NSDictionary *)sqlTypes;
- (NSDictionary *)JSONDict;
- (BOOL)isValid;
@end
